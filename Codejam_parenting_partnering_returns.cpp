// https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020bdf9
// 04-04-2020 Hard.
// The solution is not available.
// This was my best attempt. It seems to work on all my custom testsets while the test sets provided by Google (other than the sample test set) fail. Dk why. A solution may be available later.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for(int i_test = 1; i_test <= testcases; i_test++){
        string RES;
        int numTask, temp1, temp2;
        cin >> numTask;
        vector<pair<int, int> > tasks;
        vector<int> cAssigned, jAssigned;
        int cLastEnd, jLastEnd;
        
        for(int i_task = 0; i_task < numTask; i_task++){
            cin >> temp1 >> temp2;
            tasks.push_back(make_pair(temp1, temp2));
        }
        
        for(int i_task = 0; i_task < numTask; i_task++){
            
            if(cAssigned.size() == 0){
                RES.push_back('C');
                cAssigned.push_back(i_task);
                cLastEnd = i_task;
            }else{
                bool assigned = false, cannotAssignToC = false, cannotAssignToJ = false;
                if(tasks[i_task].second <= tasks[cLastEnd].first){
                    
                    for(int i_cAssign = 0; i_cAssign < cAssigned.size(); i_cAssign++){
                        if((tasks[i_task].first <= tasks[i_cAssign].first && tasks[i_cAssign].first < tasks[i_task].second) || (tasks[i_task].first < tasks[i_cAssign].second && tasks[i_cAssign].second <= tasks[i_task].second) || (tasks[i_cAssign].first <= tasks[i_task].first && tasks[i_task].second <= tasks[i_cAssign].second) || (tasks[i_task].first <= tasks[i_cAssign].first && tasks[i_cAssign].second <= tasks[i_task].second)){
                            cannotAssignToC = true;
                            break;
                        }
                    }
                    if(!cannotAssignToC){
                        RES.push_back('C');
                        cAssigned.push_back(i_task);
                        if(tasks[i_task].second > tasks[cLastEnd].second)
                            cLastEnd = i_task;
                        assigned = true;
                    }
                }
                else if(tasks[i_task].first >= tasks[cLastEnd].second){
                    RES.push_back('C');
                    cAssigned.push_back(i_task);
                    if(tasks[i_task].second > tasks[cLastEnd].second)
                        cLastEnd = i_task;
                    assigned = true;
                }else{
                    cannotAssignToC = true;
                }
                if(!assigned){
                    if(jAssigned.size() == 0){
                        RES.push_back('J');
                        jAssigned.push_back(i_task);
                        jLastEnd = i_task;
                        assigned = true;
                    }else{
                        if(tasks[i_task].second <= tasks[jLastEnd].first){
                            for(int i_jAssign = 0; i_jAssign < jAssigned.size(); i_jAssign++){
                                if((tasks[i_task].first <= tasks[i_jAssign].first && tasks[i_jAssign].first < tasks[i_task].second) || (tasks[i_task].first < tasks[i_jAssign].second && tasks[i_jAssign].second <= tasks[i_task].second) || (tasks[i_jAssign].first <= tasks[i_task].first && tasks[i_task].second <= tasks[i_jAssign].second) || (tasks[i_task].first <= tasks[i_jAssign].first && tasks[i_jAssign].second <= tasks[i_task].second) ){
                                    cannotAssignToJ = true;
                                    break;
                                }
                            }
                            if(!cannotAssignToJ){
                                RES.push_back('J');
                                jAssigned.push_back(i_task);
                                if(tasks[i_task].second > tasks[jLastEnd].second)
                                    jLastEnd = i_task;
                                assigned = true;
                            }
                        }else if(tasks[i_task].first >= tasks[jLastEnd].second){
                            RES.push_back('J');
                            jAssigned.push_back(i_task);
                            if(tasks[i_task].second > tasks[jLastEnd].second)
                                jLastEnd = i_task;
                            assigned = true;
                        }else{
                            cannotAssignToJ = true;
                        }
                    }
                }
                if((cannotAssignToJ && cannotAssignToC) || (RES.length() > numTask)){
                    RES = "IMPOSSIBLE";
                    break;
                }
            }
        }
        jAssigned.clear();
        cAssigned.clear();
        cout << "Case #" << i_test << ": " << RES << endl;
    }
}

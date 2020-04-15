// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/approximate/killjee-and-easy-problem/
// 15-04-2020 Very-easy/easy
#include<bits/stdc++.h>

using namespace std;

vector<int> graph[int(1e6+9)];
vector<int> RESNODES;
bool visited[int(1e6+9)];

// Linked list implementation of graph.

void dfs(int x){
    RESNODES.push_back(x);
    int vecSize = graph[x].size();
    visited[x] = true;
    for(int i = 0; i < vecSize; i++){
        if(!visited[graph[x][i]]){
            dfs(graph[x][i]);
            RESNODES.push_back(x);
        }
    }
    return;
}

int main(){
    int numNodes, numEdges;
    cin >> numNodes >> numEdges;
    while(numEdges--){
        int node1, node2;
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }
    dfs(1);
    cout << RESNODES.size() << endl;
    for(auto i: RESNODES)
        cout << i << " ";
}
// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/tic-tac-toe-thingy-7ce8b17b/
// 01-04-2020 Very-easy/easy

#include<bits/stdc++.h>

using namespace std;

int main(){
    char grid[3][3];
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> grid[i][j];
    int flag = 0;
    for(int i = 0; i < 3; i++)
        if(grid[i][0] == 'X' && grid[i][1] == 'X' && grid[i][2] == 'X'){
            flag = 1;
        }
    if(flag < 1)
    for(int i = 0; i < 3; i++)
        if(grid[0][i] == 'X' && grid[1][i] == 'X' && grid[2][i] == 'X'){
            flag = 1;
        }

    if(flag < 1)
    for(int i = 0; i < 3; i++)
        if(grid[i][0] == 'O' && grid[i][1] == 'O' && grid[i][2] == 'O'){
            flag = 2;
        }
    if(flag < 1)
    for(int i = 0; i < 3; i++)
        if(grid[0][i] == 'O' && grid[1][i] == 'O' && grid[2][i] == 'O'){
            flag = 2;
        }
    if(flag < 1)
    if(grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O'){
        flag = 2;
    }
    if(flag < 1)
    if(grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X'){
        flag = 1;
    }
    if(flag < 1)
    if(grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O'){
        flag = 2;
    }
    if(flag < 1)
    if(grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X'){
        flag = 1;
    }


    int numX = 0, numO = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            if(grid[i][j] == 'X')
                numX++;
            else if(grid[i][j] == 'O')
                numO++;
    }
    
    if(flag == 0 && numO == 4 && numX == 5){
        cout << "It's a draw.";
        return 0;
    }

    if(numO > numX || numO < numX-1){
        cout<< "Wait, what?";
        return 0;
    }
    if(flag == 1 && numX <= numO){
        cout<< "Wait, what?";
        return 0;
    }
    if(flag == 2 && numO != numX){
        cout << "Wait, what?";
        return 0;
    }
    if(flag == 0 && numO == numX){
        cout << "X's turn.";
        return 0;    
    }
    if(flag == 0 && numO < numX){
        cout << "O's turn.";
        return 0;    
    }
    if(flag == 1){
        cout << "X won.";
        return 0;
    }
    if(flag == 2){
        cout << "O won.";
        return 0;
    }
    cout << "It is a draw.";
    return 0;
    
}
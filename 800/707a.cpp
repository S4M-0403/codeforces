#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    char matrix[row][col];
    for (int i = 0; i < row;i++)
        for (int j = 0; j < col;j++)
            cin >> matrix[i][j];
    bool flag = false;
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(matrix[i][j]!='W' && matrix[i][j]!='B' && matrix[i][j]!='G'){
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        cout << "#Color";
    else
        cout << "#Black&White";
    return 0;
}
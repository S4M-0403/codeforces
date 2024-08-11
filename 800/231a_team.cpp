#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c){
    return (a + b + c) >= 2;
}
int main(){
    int a;
    cin >> a;
    int arr[a][3];
    int count = 0;
    int sum;
    for (int i = 0; i < a;i++)
        for (int j = 0; j < 3;j++)
            cin >> arr[i][j];
    for (int i = 0; i < a;i++)
        if(check(arr[i][0], arr[i][1], arr[i][2]))
            count++;
    cout << count << endl;
    return 0;
}
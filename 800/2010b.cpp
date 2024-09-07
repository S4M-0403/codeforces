#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[2];
    for (int i = 0; i < 2;i++)
        cin >> arr[i];
    int sum = arr[0] + arr[1];
    cout << 6 - sum << endl;
}
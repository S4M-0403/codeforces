#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int arr[x];
    float sum = 0;
    for (int i = 0; i < x;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    float avg = sum / x;
    cout << avg << endl;
    return 0; 
}
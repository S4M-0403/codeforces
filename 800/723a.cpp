#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i < 3;i++)
        cin >> arr[i];
    sort(arr, arr + 3);
    int median = arr[1];
    int dist = 0;
    for (int i = 0; i < 3;i++)
        dist += abs(median - arr[i]);
    cout << dist << endl;
    return 0;

}
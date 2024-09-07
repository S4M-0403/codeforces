#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test>0){
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a;i++)
            cin >> arr[i];
        //sum of elements at even index
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < a;i+=2)
            sum1 += arr[i];
        for (int j = 1; j < a;j+=2)
            sum2 += arr[j];
        cout << sum1 - sum2 << endl;
        test--;
    }
    return 0;
}
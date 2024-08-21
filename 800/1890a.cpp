#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    while(a--){
        int num;
        cin >> num;
        vector<int> arr(num);
        for (int i = 0; i < num;i++)
            cin >> arr[i];
        bool isSame = true;
        if (num == 3){
            if(arr[0]+arr[1] == arr[2])
                cout<<"Yes"<<endl;
            else
                cout << "No" << endl;
            break;
        }
        int sum = arr[0] + arr[1];
        for (int i = 1; i < num-1; i++){
            if (arr[i]+arr[i+1]!=sum){
                isSame = false;
                break;
            }
        }
        if(isSame)
            cout << "Yes" << endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
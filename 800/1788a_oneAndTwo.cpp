#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a;i++)
            cin >> arr[i];
        int count = 0;
        for (int i = 0; i < a;i++)  
            if(arr[i] == 2)
                count++;
        if(count%2!=0)
            cout << -1 << endl;
        else if(count == 0)
            cout << 1 << endl;
        else {
            int b = -1;
            int twoCount = 0;
            for (int i = 0; i < a;i++){
                if(arr[i]==2)
                    twoCount++;
                if(twoCount == count/2){
                    b = i+1;
                    break;
                }
            }
            cout << b << endl;
        }
    }
}

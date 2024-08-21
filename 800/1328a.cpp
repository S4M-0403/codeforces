#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x--){
        int a, b;
        cin >> a >> b;
        int count=0;
        if(a<b){
            cout << b - a << endl;
        }
        else{
            if(a%b!=0){
                int x = ceil(a/b);
                count = b*(x+1)-a;
            }
            cout << count << endl;
        }
        
        }
}
/* 
5
10 4
13 9
100 13
123 456
92 46
*/
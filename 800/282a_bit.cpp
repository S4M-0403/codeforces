#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 0;
    int x;
    cin >> x;
    string op = "";
    while(x--){
        cin >> op;
        if(op == "X++" or op =="++X")
            a++;
        else if(op =="X--" or op == "--X")
            a--;
    }
    cout << a << endl;
}
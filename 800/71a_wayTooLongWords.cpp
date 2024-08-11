#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    for (int i = 0; i < x;i++){
        string str;
        cin >> str;
        if(str.length()<=10)
            cout << str <<endl;
        else{
            int length = str.length()-2;
            string newStr = str[0] + to_string(length) + str[str.length() - 1];
            cout << newStr << endl;
        }
    }
}
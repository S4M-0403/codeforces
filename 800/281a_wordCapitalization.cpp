#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string newStr = str;
    newStr[0] = toupper(str[0]);
    cout << newStr << endl;
    return 0;
}
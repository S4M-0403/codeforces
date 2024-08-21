#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int countLower = 0;
    int countUpper = 0;
    for (int i = 0; i < str.length();i++){
        if(isupper(str[i]))
            countUpper++;
        else
            countLower++;
    }
    if(countLower<countUpper)
        for (int i = 0; i < str.length();i++)
            str[i] = toupper(str[i]);
    else
        for (int i = 0; i < str.length();i++)
            str[i] = tolower(str[i]);

    cout << str << endl;
    return 0;
}
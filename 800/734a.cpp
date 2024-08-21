#include<bits/stdc++.h>
using namespace std;
int main(){
    int countA = 0;
    int countD = 0;
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n;i++){
        if(str[i] == 'A')
            countA++;
        else
            countD++;
    }
    if(countA>countD)
        cout << "Anton";
    else if(countD>countA)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
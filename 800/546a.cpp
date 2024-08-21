#include<bits/stdc++.h>
using namespace std;
int main(){
    int cost;
    int dollars;
    int wanted;
    cin >> cost>> dollars>> wanted;
    int totalCost = 0;
    for (int i = 1; i <= wanted;i++){
        totalCost += cost *i;
    }
    int borrow = totalCost - dollars;
    if(borrow>=0)
        cout << borrow << endl;
    else
        cout << 0 << endl;
    return 0;
}
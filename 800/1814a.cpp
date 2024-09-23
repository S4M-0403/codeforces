#include<bits/stdc++.h>
using namespace std;
bool canRepresent(long long n, long long k)
{
    if (n % 2 == 1 && k % 2 == 0)
        return false;
    if (n % 2 == 0)
        return true;
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        // we have to find values of x and y such that 2*x + k*y = n;
        if(canRepresent(n, k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
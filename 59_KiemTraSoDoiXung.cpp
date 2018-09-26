#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void printBool(bool b){
    cout << (b ? "YES": "NO");
}

bool kiemTraSoDoiXung(ll n){
    if(n == 0){
        return true;
    }

    ll tmp = n;
    ll soDao = 0;

    while(n > 0){
        soDao = soDao * 10 + ( n % 10);
        n/=10;
    }

    return soDao = tmp;
}



int main(){
    ll n;
    cin >> n;
    printBool(kiemTraSoDoiXung(n));
    return 0;
}



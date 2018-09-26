#include<bits/stdc++.h>
#include<string>
#define ll unsigned long long
using namespace std;

ll gcd(ll a, ll b){
    ll r;

    while(b){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int main(){
    ll a, b;

    cin >> a >> b;
    cout << gcd(a, b);

    return 0;
}

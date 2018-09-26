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

ll lcm(ll a, ll b){

    ll t = gcd(a, b);
    return (a*b) / t;
}


int main(){
    ll a, b;

    cin >> a >> b;
    cout << lcm(a, b) << "\n";

    return 0;
}

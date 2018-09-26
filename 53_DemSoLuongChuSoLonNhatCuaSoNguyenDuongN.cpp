#include<iostream>
#define ll unsigned long long
using namespace std;

ll FindMax(ll n){
    ll m = LONG_LONG_MIN;

    do{
        m = max(m, n%10);
        n /= 10;
    }while(n > 0);

    return m;
}

ll CountNumm(ll n, ll x){
    ll c = 0;

    if(n == 0 && x == 0){
        return 1;
    }

    while(n > 0){
        if(n % 10 == x){
            c++;
        }
        n /= 10;
    }
    return c;

}


int main(){
    ll n, _max;
    cin >> n;
    _max = FindMax(n);
    cout << _max << "\n";// in ra max

    ll c = CountNumm(n, _max);

    cout << c << "\n";// in ra so luong gia tri max

    return 0;
}

#include<iostream>
#define ll unsigned long long
using namespace std;

ll FindMin(ll n){
    ll m = LONG_LONG_MAX;

    while(n > 0){
        m = min(m, n%10);
        n /= 10;
    }

    return m;
}

ll CountNumm(ll n, ll x){
    ll c = 0;

    while(n > 0){
        if(n % 10 == x){
            c++;
        }
        n /= 10;
    }
    return c;

}


int main(){
    ll n, _min;
    cin >> n;
    _min = FindMin(n);
    cout << _min << "\n";// in ra 23min

    ll c = CountNumm(n, _min);

    cout << c << "\n";// in ra so luong gia tri min

    return 0;
}

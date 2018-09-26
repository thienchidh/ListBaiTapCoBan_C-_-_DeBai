#include<iostream>
#define ll unsigned long long
using namespace std;

ll n, _min = LONG_LONG_MAX;

int main(){
    cin >> n;

    do{
        _min = min(_min, n%10);
        n /= 10;
    }while(n > 0);

    cout<< _min;
    return 0;
}

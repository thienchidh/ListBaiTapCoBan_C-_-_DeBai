#include<iostream>
#define ll unsigned long long
using namespace std;

ll n, _max = INT_MIN;

int main(){
    cin >> n;

    do{
        _max = max(_max, n%10);
        n /= 10;
    }while(n > 0);

    cout<< _max;
    return 0;
}

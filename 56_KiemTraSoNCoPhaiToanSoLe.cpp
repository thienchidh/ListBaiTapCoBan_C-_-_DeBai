#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll n;

bool CheckOdd(ll n){

    do{
        if((n % 10) % 2 == 0){
            return false;
        }
        n /= 10;
    }while(n > 0);

    return true;
}

void printBool(bool b){
    cout << (b ? "YES": "NO");
}

int main(){

    cin >> n;

    printBool(CheckOdd(n));
    return 0;
}

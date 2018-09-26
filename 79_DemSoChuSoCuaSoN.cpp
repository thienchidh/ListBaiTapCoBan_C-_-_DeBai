//Bài 79: Hãy đếm số lượng chữ số của số nguyên dương n
#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    int c = 0;

    while(n > 0){
        n/=10;
        c++;
    }
    cout << c << "\n";
    return 0;
}

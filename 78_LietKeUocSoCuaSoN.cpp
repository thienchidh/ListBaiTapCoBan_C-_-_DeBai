//Bài 78: Liệt kê tất cả các ước số của số nguyên dương n
#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            cout << i << " ";
    }
    cout << n;

    return 0;
}

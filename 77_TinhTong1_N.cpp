//Bài 77: Viết chương trình tính tổng của dãy số sau: S(n) = 1 + 2 + 3 + … + n
#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n, s = 0;
    cin >> n;

    for(int i = 0; i <= n; i++){
        s += i;
    }

    cout << s <<endl;
    return 0;
}

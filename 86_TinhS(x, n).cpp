//Bài 86: Tính S(n) = 1^3 + 2^3 + … + N^3
#include<bits/stdc++.h>

using namespace std;

int main() {
    int i, n, S;
    cin >> n;
    S = 0;
    i = 1;
    while(i <= n) {
        S = S + i * i * i;
        i++;
    }
    cout << S << "\n";
    return 0;
}

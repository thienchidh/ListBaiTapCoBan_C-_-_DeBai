//Bài 71: Tính S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n)

#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;
    float x, S, T;
    long M;
    cin >> x;
    cin >> n;

    S = 0;
    T = 1;
    M = 0;
    i = 1;

    while(i <= n) {
        T = T * x;
        M = M + i;
        S = S + pow(-1, (float)i) * T/M;
        i++;
    }
    cout << S << "\n";
    return 0;
}

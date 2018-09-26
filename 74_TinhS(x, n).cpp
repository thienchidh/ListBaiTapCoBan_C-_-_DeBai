//Bài 74: Tính S(x, n) = 1 – x + x^3/3! – x^5/5! + … + (-1)^n+1 * x^2n+1/(2n+ 1)!
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n;
    float x, S, T;
    long M, N;
    cin >> x >> n;

    S = 1;
    N = 1;
    i = 1;

    while(i <= n) {

        T = pow(x, (2 * i + 1));
        M = i * 2 + 1;
        N = N * M * (M - 1);
        S = S + pow(-1, (float)(i + 1)) * T/N ;
        i++;
    }
    cout << S << "\n";
    return 0;
}


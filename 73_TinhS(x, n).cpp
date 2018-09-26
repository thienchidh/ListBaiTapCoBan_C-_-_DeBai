//Bài 73: Tính S(x, n) = -1 + x^2/2! – x^4/4! + … + (-1)^n+1 * x^2n/(2n)!
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
        T = pow(x, (2 * i ));
        M = i * 2;
        N = N * M * (M - 1);
        S = S + pow(-1, (float)i) * T / N;
        i++;
    }
    cout << S << endl;
    return 0;
}


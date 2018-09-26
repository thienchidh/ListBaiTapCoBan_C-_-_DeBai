//Bài 72: Tính S(x, n) = – x + x^2/2! – x^3/3! + … + (-1)^n * x^n/n!
#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, n;
    float x, S, T;
    long M;
    cin >> x >> n;

    S = 0;
    T = 1;
    M = 1;
    i = 1;

    while(i <= n) {
        T = T * x;
        M = M * i;
        S = S + pow(-1, (float)i) * T/M;
        i++;
    }
    cout << S<< "\n";
    return 0;
}

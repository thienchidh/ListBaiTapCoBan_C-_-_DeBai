//Bài 70: Tính S(n) = 1 – 1/(1 + 2) + 1/(1 + 2 + 3) + … + (-1)^n+1 * 1/(1 + 2 + 3+ … + n)
#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;
    float S, P;
    S = 0;
    P = 0;
    i = 1;

    cin >> n;
    while(i <= n) {
        P = P + i;
        S = S + 1 * pow(-1, (float)(1 + i))/ P;
        i++;
    }
    cout << S << "\n";

    return 0;
}

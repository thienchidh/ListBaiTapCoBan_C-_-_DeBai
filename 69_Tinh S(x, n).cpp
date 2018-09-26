//Bài 69: Tính S(x, n) = x – x^3 + x^5 + … + (-1)^n * x^2n+1

#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;
    float x, T, S;
    i = 0;
    T = 1;
    S = 0;
    cin >> x;
    //x = -x;
    cin >> n;

    while(i < n) {
        T = pow(x, (2 * i + 1)) * pow(-1, (float)i);
        S = S + T;
        i++;
    }
    cout << S;

    return 0;
}

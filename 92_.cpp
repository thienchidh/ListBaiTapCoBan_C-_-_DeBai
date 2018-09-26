/* Bài 92: Tìm ước số chung lớn nhất của 2 số nguyên dương*/
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int r = a;
    while(b) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}

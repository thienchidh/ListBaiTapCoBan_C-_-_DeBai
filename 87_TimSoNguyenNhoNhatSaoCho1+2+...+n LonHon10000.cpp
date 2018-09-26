//Bài 87: Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000
#include<bits/stdc++.h>

using namespace std;

int main() {
    int S = 0;
    int n = 0;
    while(S < 10000) {
        n++;
        S = S + n;
    }
    cout << S << "\n";
    cout << n << "\n";
    return 0;
}

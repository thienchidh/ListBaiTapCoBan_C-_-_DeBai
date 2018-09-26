//Bài 90: Viết chương trình tìm số nguyên dương m lớn nhất sao cho 1 + 2 + … + m < N
#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, m, S;
    cin >> N;

    S = 0;
    m = 0;
    do {
        m = m + 1;
        S = S + m;
    } while(S + m + 1 < N);
    cout << m << "\n";
    return 0;
}

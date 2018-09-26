//Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
#include <bits/stdc++.h>

#define ll long long int

using namespace std;

const int n = 3;
double a[n];
int main() {
    double Max = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        Max = max(Max, a[i]);
    }
    cout << Max << "\n";

    return 0;
}

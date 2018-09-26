/* Bài 156: Hãy tìm giá trị trong mảng các số thực gần giá trị x nhất*/
#include<bits/stdc++.h>
using namespace std;

int findNearestValue(double *a, int n, double x) {
    int Min = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(abs(x - a[i]) < Min) {
            Min = x - a[i];
        }
    }
    return Min;
}

int main() {
    double *a;
    int n, x;
    cin >> n >> x;
    a = new double[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << x - findNearestValue(a, n, x) << "\n";

    delete[] a;
    return 0;
}

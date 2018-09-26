/* Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất*/
#include<bits/stdc++.h>
using namespace std;

int findFarthestValue(double *a, int n, double x) {
    int Max = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(abs(x - a[i]) > Max) {
            Max = x - a[i];
        }
    }
    return Max;
}

int main() {
    double *a;
    int n, x;
    cin >> n >> x;
    a = new double[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << x - findFarthestValue(a, n, x) << "\n";

    delete[] a;
    return 0;
}

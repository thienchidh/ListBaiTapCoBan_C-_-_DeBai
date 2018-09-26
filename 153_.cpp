/* Bài 153: Hãy tìm giá trị chẵn nhỏ nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số chẵn thì trả về -1*/
#include<bits/stdc++.h>
using namespace std;

int findMinEven(int *a, int n) {
    int Min = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] < Min && a[i] % 2 == 0) {
            Min = a[i];
        }
    }

    if(Min == INT_MAX) {
        return -1;
    }
    return Min;
}

int main() {
    int *a;
    int n;
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << findMinEven(a, n) << "\n";

    delete[] a;
    return 0;
}

/* Bài 191: Hãy liệt kê các giá trị cực đại trong mảng 1 chiều các số thực. Một phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
template <typename T> void nhap (T a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
template <typename T>void xuat(T a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void LietKeCacGiaTriCucDai(float a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1] && a[i - 1] < a[i]) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeCacGiaTriCucDai(a, n);

    return 0;
}

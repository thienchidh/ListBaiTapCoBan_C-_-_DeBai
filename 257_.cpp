/* Bài 257: Sắp xếp lẻ tăng dần nhưng giá trị khác giữ nguyên vị trí*/
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
void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void SapXepLeTangDan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] % 2 != 0) {
            for(int j = i + 1; j < n; j++) {
                if(a[j] % 2 != 0 && a[i] > a[j]) {
                    HoanVi(a[i], a[j]);
                }
            }

        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    SapXepLeTangDan(a, n);
    xuat(a, n);

    return 0;
}

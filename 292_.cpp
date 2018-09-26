/* Bài 292: Biến đổi mảng số thực bằng cách thay tất cả phần tử trong mảng bằng số nguyên gần nó nhất (giống làm tròn)Kỹ thuật xử lý mảng con*/
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
/*
n = 6.9
phannguyen = (int)(6.9) = 6
phan le = 6.9 - 6 = 0.9

*/
void ThaySoGanNhat(float &n) {
    int phannguyen = (int)(n);
    float phanle = n - phannguyen;
    // làm tròn
    if(phanle <= 0.5) {
        n = (float)phannguyen;
    } else {
        n = (float)phannguyen + 1;
    }
}

// Giống như làm tròn
void ThayCacPhanTuTrongMangBangSoNguyenGanNoNhat(float a[], int n) {
    for(int i = 0; i < n; i++) {
        ThaySoGanNhat(a[i]);
    }
}
int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);

    ThayCacPhanTuTrongMangBangSoNguyenGanNoNhat(a, n);
    xuat(a, n);

    return 0;
}

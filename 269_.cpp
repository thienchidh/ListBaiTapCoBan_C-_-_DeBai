/* Bài 269: Thêm x vào trong mảng tăng nhưng vẫn giữ nguyên tính tăng của mảng*/
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

void SapXepTangDan(int a[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}
/*
Cho chạy từ cuối về đầu, nếu thấy số nào lớn hơn x thì cho nó dịch về sau 1 vị trí.
*/
void ChenXVaoMangTang(int a[], int &n, int x) {
    int i, j;
    for(i = 0; i < n; i++) {
        if(x < a[i]) {
            int temp = x;
            for(j = n; j > i; j--) {
                a[j] = a[j - 1];
            }
            a[i] = temp;
            break;
        }
    }
    n++;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    SapXepTangDan(a, n);
    int PhanTuThem;


    cin >>PhanTuThem;

    ChenXVaoMangTang(a, n, PhanTuThem);

    xuat(a, n);

    return 0;
}


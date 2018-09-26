/* Bài 294: Liệt kê mảng con có độ dài lớn hơn 2 phần tử*/
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
void LietKeTatCaMangConDoDaiLonHon2PhanTu(int a[],int n) {
    int ChieuDai;  // độ dài mảng con
    for(int i = 0; i < n; i++) {
        for(ChieuDai = 3 + i; ChieuDai <= n; ChieuDai++) { // nếu bỏ vòng for này thì sao ?
            for(int j = i; j < ChieuDai; j++) {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKeTatCaMangConDoDaiLonHon2PhanTu(a, n);

    return 0;
}

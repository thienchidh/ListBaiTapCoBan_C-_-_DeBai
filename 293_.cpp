/* Bài 293: Liệt kê tất cả các mảng con*/
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
void LietKeTatCaMangCon(int a[],int n) {
    int ChieuDai;  // độ dài mảng con
    for(int i = 0; i < n; i++) {
        for(ChieuDai = 1; ChieuDai <= n; ChieuDai++) { // nếu bỏ vòng for này thì sao ?
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
    LietKeTatCaMangCon(a, n);

    return 0;
}

/* Bài 289: Xuất mảng: chẵn nằm trên 1 mảng, lẻ nằm trên hàng tiếp theo*/
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

void XuatChanLe2Hang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    printf("\n\t");
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n, k;
    int a[MAX];

    nhap(a, n);
    XuatChanLe2Hang(a, n);

    return 0;
}

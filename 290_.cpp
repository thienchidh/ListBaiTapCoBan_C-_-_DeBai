/* Bài 290: Đảo ngược thứ tự số chẵn và lẻ trong mảng nhưng giữ vị trí tương đối */
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
    int tam = a;
    a = b;
    b = tam;
}

void DaoNguocChanLe(int a[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] % 2 == 0 && a[j] % 2 == 0) {
                HoanVi(a[i], a[j]);
            } else if(a[i] % 2 != 0 && a[j] % 2 != 0) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DaoNguocChanLe(a, n);
    xuat(a, n);

    return 0;
}

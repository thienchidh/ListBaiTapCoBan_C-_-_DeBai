/* Bài 282: Đưa các số chia hết cho 3 về đầu mảng*/
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
void DoiCho(int a[], int n, int ViTriDoi) {
    int tam = a[ViTriDoi];
    for(int i = ViTriDoi; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = tam;
}

void DuaSoChiaHetCho3VeDau(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] % 3 == 0) {
            DoiCho(a, n, i);
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    DuaSoChiaHetCho3VeDau(a, n);
    xuat(a, n);

    return 0;
}

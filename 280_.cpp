/* Bài 280: Hãy đưa số 1 về đầu mảng*/
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
    for(int i = ViTriDoi; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = 1;
}

void Dua1VeDau(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            DoiCho(a, n, i);
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    Dua1VeDau(a, n);
    xuat(a, n);

    return 0;
}




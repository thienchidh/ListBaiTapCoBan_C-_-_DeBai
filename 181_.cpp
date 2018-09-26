/* Bài 181: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị chẵncó ít nhất 1 lân cận cũng là giá trị chẵn*/
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
void LietKe(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0 && (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    LietKe(a, n);

    return 0;
}

/* Bài 194: Cho mảng 1 chiều các số nguyên có nhiều hơn 2 giá trị. Hãy viết hàmliệt kê các cặp giá trị gần nhau nhất*/
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
    int i, j;
    int khoangCachGanNhat = (abs)(a[0] - a[1]);
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n - 1; j++) {
            if((abs)(a[i] - a[j]) < khoangCachGanNhat) {
                khoangCachGanNhat = (abs)(a[i] - a[j]);
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n - 1; j++) {
            if((abs)(a[i] - a[j]) == khoangCachGanNhat) {
                cout << "<" << a[i] << ", " << a[j] << "> <" << i << ", " << j << ">" << endl;
            }
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKe(a, n);

    return 0;
}

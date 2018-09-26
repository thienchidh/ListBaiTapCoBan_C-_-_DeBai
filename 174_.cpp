/* Bài 174 (*): Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a, b) trong mảng thỏa điều kiện a <= b*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 100

template <typename T>
void nhap (T a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
template <typename T>
void xuat(T a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void LietKe(float a[], int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j] || a[i] == a[j]) {
                cout << "<" << a[i] << ", " << a[j] << "> <" << i << ", " << j << ">" << endl;
            }
        }
    }
}

int main() {
    int n;
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKe(a, n);

    return 0;
}

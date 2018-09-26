/* Bài 175 (*): Cho mảng số thực có nhiều hơn 2 giá trị và các giá trị trong mảng khác nhau từng đôi một. Hãy viết hàm tìm 2 giá trị gần nhau nhất trong mảng (Lưu ý: Mảng có các giá trị khác nhau từng đôi một còn có tên là mảng phân biệt)Các Bài tập tìm kiếm và liệt kê:*/
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
    float khoangCachGanNhat = (abs)(a[0] - a[1]);
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
    float a[MAX];

    nhap(a, n);
    xuat(a, n);
    LietKe(a, n);

    return 0;
}

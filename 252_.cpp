/* Bài 252: Ta định nghĩa 1 mảng được gọi là dạng song, khi phần tử có trị số I lớn hơn hoặc nhỏ hơn 2 phần tử xung quanh. Hãy viết hàm kiểm tra mảng có dạng sóng không*/
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
int KiemTraDangSong(int a[], int n) {
    int flag = 1;
    for(int i = 1; i < n - 1; i++) {
        if((a[i] < a[i - 1] && a[i] > a[i + 1]) || (a[i] > a[i - 1] && a[i] < a[i + 1])) {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main() {
    int n, d;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);

    int flag = KiemTraDangSong(a, n);
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

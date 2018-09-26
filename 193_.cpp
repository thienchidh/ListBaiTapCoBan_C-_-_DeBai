/* Bài 193: Cho mảng 1 chiều các số nguyên. Hãy viết hàm liệt kê các giá trị trongmảng có dạng 3^k. Nếu mảng không có giá trị đó thì trả về 0*/
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

int KiemTraDang3K(int n) {
    int flag=1;
    n = n < 0 ? -n : n;
    if(n < 2)
        return 1;

    while(n > 1) {
        int du = n % 3;
        if(du != 0)  // nếu dư mà khác 0. lập tức báo sai
            flag = 0;
        n /= 3;
    }
    if(flag == 1)
        return 1;
    else
        return 0;
}

void LietKeCacGiaTriCoDang3K(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraDang3K(a[i]) == 1) {
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
    LietKeCacGiaTriCoDang3K(a, n);

    return 0;
}

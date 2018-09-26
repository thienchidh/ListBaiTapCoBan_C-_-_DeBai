/* Bài 166: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên trong mảng có dạng 2^k. Nếu mảng không có giá trị dạng 2k thì hàm sẽ trả về 0*/
#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
#define MAX 100

void nhap (int a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int KiemTraDang2K(int n) {
    if (n <= 1)
        return 1;
    while(n > 1) { // vòng lặp kết thúc khi n == 1
        if(n % 2 != 0)
            return 0;
        n /= 2;
    }
    return 1;
}

int TimGiaTri2KDauTien(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(KiemTraDang2K(a[i]) == 1) {
            return a[i];
        }
    }
    return 0;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    cout << TimGiaTri2KDauTien(a, n) << endl;
    return 0;
}

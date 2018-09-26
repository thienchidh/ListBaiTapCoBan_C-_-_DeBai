/* Bài 168: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm giá trị lớn nhất trong mảng có dạng 5^k. Nếu mảng khong tồn tại giá trị 5^k thì hàm sẽ trả về 0*/
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

int KiemTraDang5K(int n) {
    if (n <= 1)
        return 1;
    while(n > 1) { // vòng lặp kết thúc khi n == 5
        if(n % 5 != 0)  // Có thể viết n % 5
            return 0;
        n /= 5;
    }
    return 1;
}

int TimGiaTri5kLonNhat(int a[], int n) {
    int max;
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if (KiemTraDang5K(a[i]) == 1) {
            max = a[i];
            dem ++;
            break;
        }
    }
    if (dem == 0)
        return 0;
    for(int i = 0; i < n; i++)
        if (KiemTraDang5K(a[i]) == 1)
            max = (max > a[i]) ? max : a[i] ;
    return max;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int KetQua = TimGiaTri5kLonNhat(a, n);
    cout << KetQua << endl;

    return 0;
}

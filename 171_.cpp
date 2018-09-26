/* Bài 171: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm ước chung lớn nhất của tất cả các phần tử trong mảng*/
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

int TimSoNhoNhat(int a[], int n) {
    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];  //min = (min < a[i])? min: a[i];
        }
    }
    return min;
}

// kiểm tra xem	ước số có phải là ước chung lớn nhất của mảng hay không
bool KiemTraUocSoChung(int a[], int n, int UocSo) {
    for(int i = 0; i < n; i++) {
        if(a[i] % UocSo != 0) {
            return false;
        }
    }
    return true;
}

int TimUocSoLonNhatCuaMang(int a[], int n) {
    // Do 1 số muốn chia hết tất cả các số trong mảng thì số đó
    // phải chia hết cho số nhỏ nhất trong mảng
    for(int UocSo = TimSoNhoNhat(a, n); UocSo >= 1; UocSo--) {
        if(KiemTraUocSoChung(a, n, UocSo) == true) {
            return UocSo;
        }
    }
    return 1;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int Kq = TimUocSoLonNhatCuaMang(a, n);
    cout << Kq << endl;

    return 0;
}

/* Bài 170: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng*/
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
// nguyên tố => true
bool KiemTraNguyenTo(int n) {
    if (n < 2) {
        return false;
    } else if (n > 2) {
        if (n % 2 == 0) {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int TimSoLonNhat(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++)
        max = (max > a[i]) ? max : a[i];
    return max;
}

int TimNguyenToNhoNhatLonHonMoiGiaTriTrongMang(int a[], int n) {
    int max = TimSoLonNhat(a, n);
    int SoCanTim = max + 1;
    for(SoCanTim = max + 1;; SoCanTim++) {
        if(max < SoCanTim) {
            if(KiemTraNguyenTo(SoCanTim) == 1)
                break;
        }
    }
    return SoCanTim;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int Kq = TimNguyenToNhoNhatLonHonMoiGiaTriTrongMang(a, n);
    cout << Kq << endl;
    return 0;
}

/* Bài 172: Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm bội chung nhỏ nhất của tất cả các phần tử trong mảng*/
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
int TimSoLonNhat(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];  //max = (max>A[i]) ? max : A[i];
        }
    }
    return max;
}

/*
Tìm BCNN  1 2 3
vị trí i  0 1 2
Khởi tạo BCNN = 3
i = 0: 3 % 1 == 0 -> BCNN = 3
i = 1: 3 % 2 != 0 -> BCNN = 3 + 3 = 6, i = -1

sau khi i++
i lúc này lại reset lại từ 0 và BCNN là 6
BCNN = 6
i = 0: 6 % 1 == 0 -> BCNN = 6
i = 1: 6 % 2 == 0 -> BCNN = 6
i = 2: 6 % 3 == 0 -> BCNN = 6

*/
int TimBoiChungNhoNhat(int a[], int n) {
    int BoiSo = TimSoLonNhat(a, n);
    for(int i = 0; i < n; i++) {
        if(BoiSo % a[i] != 0) {
            BoiSo += TimSoLonNhat(a, n);
            i = -1;     // reset lại i
        }
    }
    return BoiSo;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int Kq = TimBoiChungNhoNhat(a, n);
    cout << Kq << endl;
    return 0;
}

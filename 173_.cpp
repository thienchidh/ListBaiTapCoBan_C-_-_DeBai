/* Bài 173 (*): Cho mảng 1 chiều các số nguyên. Hãy viết hàm tìm chữ số xuất hiện ít nhất trong mảng*/
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
/*

VD: 12 34 134
thì ta dc 1 mảng số:
Trị số : 0 1 2 3 4 5 6 7 8 9
Giá trị: 0 2 1 2 2 0 0 0 0 0

*/
void DemChuSo(int a[], int n, int b[]) {
    // Duyệt mảng a
    for (int i = 0; i < n; i++) {
        int themang = abs(a[i]);
        while (themang != 0) {
            int ChuSo = themang % 10;
            themang /= 10;

            b[ChuSo]++;
        }
    }
}
int TimChuSoXuatItNhat(int a[], int n, int b[]) {
    int ChuSoMin = abs(a[0] % 10);
    for (int i = 0; i < 10 ; i++) {
        if (b[i] != 0) {
            ChuSoMin = (b[ChuSoMin] < b[i]) ? ChuSoMin : i;
        }
    }
    return ChuSoMin;
}


int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int b[10] = {0};
    DemChuSo(a, n, b);
    for (int i = 0; i < 10; i++) {
        // Chỉ xét những chữ số có số lần xuất hiện > 0
        if (b[i] != 0) {
            cout << i << " " << b[i] << endl;
        }
    }

    int ChuSoMin = TimChuSoXuatItNhat(a, n, b);
    cout << ChuSoMin<< endl;
    return 0;
}

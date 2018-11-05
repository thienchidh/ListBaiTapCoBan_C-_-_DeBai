/* Bài 451: Đếm số lượng dòng giảm*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 100
void NhapMaTran(int a[][MAX], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void XuatMaTran(int a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int KiemTraDongGiam(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] < a[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int DemSoLuongDongGiam(int a[][MAX], int n) {
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(KiemTraDongGiam(a[i], n) == 1) {
            dem++;
        }
    }
    return dem;
}
int main() {
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);


    int dem = DemSoLuongDongGiam(a, n);
    cout << dem << endl;
    return 0;
}

/* Bài 385: Liệt kê các dòng có tổng lớn nhất*/
#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void NhapMang(int a[][MAX], int &dong, int &cot) {
    cin >> dong >> cot;
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cin >> a[i][j];
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int TinhTong(int a[], int cot) {
    int Tong = 0;
    for(int i = 0; i < cot; i++) {
        Tong += a[i];
    }
    return Tong;
}

void LietKeCacDongCoTongLonNhat(int a[][MAX], int dong, int cot) {
    int b[MAX];
    for(int i = 0; i < dong; i++) {
        b[i] = TinhTong(a[i], cot);
    }
    // Tổng Max
    int Max = b[0];
    for(int i = 1; i < dong; i++) {
        Max = (Max > b[i]) ? Max : b[i];
    }
    // Liệt kê tổng Max
    for(int i = 0; i < dong; i++) {
        if(Max == b[i]) {
            cout << i << " " << Max << endl;
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongCoTongLonNhat(a, dong, cot);
    return 0;
}

/* Bài 370: Tìm giá trị âm lớn nhất trong ma trận */
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
int TimAmDauTien(int a[][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] < 0) {
                return a[i][j];
            }
        }
    }
    return 0;
}
int TimGiaTriAmLonNhat(int a[][100], int cot, int dong) {
    int AmMax = TimAmDauTien(a, cot, dong);
    if (AmMax == 0) {
        return 0;
    }
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] < 0) {
                AmMax = (AmMax > a[i][j]) ? AmMax : a[i][j];
            }
        }
    }
    return AmMax;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    cout << TimGiaTriAmLonNhat(a, dong, cot) << endl;
    return 0;
}

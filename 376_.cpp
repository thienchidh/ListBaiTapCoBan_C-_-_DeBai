/* Bài 376: Tìm số dương nhỏ nhất*/
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
int TimSoDuongDauTien(int a[][MAX], int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] > 0) {
                return a[i][j];
            }
        }
    }
    return -1;
}

int TimSoDuongNhoNhat(int a[][MAX], int dong, int cot) {
    int DuongMin = TimSoDuongDauTien(a, dong, cot);
    if (DuongMin == -1) {
        return -1;
    }
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(a[i][j] > 0) {
                DuongMin = (DuongMin < a[i][j]) ? DuongMin : a[i][j];
            }
        }
    }
    return DuongMin;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    cout << TimSoDuongNhoNhat(a, dong, cot) << endl;

    return 0;
}

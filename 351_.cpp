/* Bài 351: Kiểm tra ma trận có toàn dương hay không*/
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

bool KiemTraMaTranCoToanSoDuong(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(a[i][j] < 0) {
                return false;
            }
        }
    }
    return true;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    if(KiemTraMaTranCoToanSoDuong(a, dong, cot)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

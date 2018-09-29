/* Bài 352: Kiểm tra một hàng ma trận có tăng dần hay không */
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
int KiemTra1HangMaTranCoTangDan(int a[][MAX], int x, int cot) {
    int flag = 1;
    for(int j = 0; j < cot - 1; j++) {
        for(int k = j + 1; k < cot; k++) {
            if(a[x][j] > a[x][k]) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);

    int x;
    cin >> x;

    int flag = KiemTra1HangMaTranCoTangDan(a, x, cot);
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

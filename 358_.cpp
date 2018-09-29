/* Bài 358: Liệt kê các dòng có chứa giá trị chẵn trong ma trận các số nguyên */
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
void LietKeDongChuaGiaTriChan(int a[][MAX], int dong, int cot) {
    int flag;
    for(int i = 0; i < dong; i++) {
        flag = 0;
        for(int j = 0; j < cot; j++) {
            if(a[i][j] % 2 == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            cout << i << endl;
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeDongChuaGiaTriChan(a, dong, cot);
    return 0;
}

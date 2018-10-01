/* Bài 387: Liệt kê các dòng có nhiều số chẵn nhất*/
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

void LietKeCacDongCoNhieuSoChanNhat(int a[][MAX], int dong, int cot) {
    int dem[MAX] = {0}; // Khởi tạo
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(a[i][j] % 2 == 0) {
                dem[i]++;
            }
        }
    }
    // Tìm Max
    int Max = dem[0];
    for(int i = 1; i < dong; i++) {
        Max = (Max > dem[i]) ? Max : dem[i];
    }
    // Liệt kê dòng có nhiều số chẵn nhất
    for(int i = 0; i < dong; i++) {
        if(Max == dem[i]) {
            cout << i << " " << Max << endl;
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongCoNhieuSoChanNhat(a, dong, cot);

    return 0;
}

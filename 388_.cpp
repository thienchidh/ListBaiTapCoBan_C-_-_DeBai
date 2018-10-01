/* Bài 388: Liệt kê các dòng có nhiều số nguyên tố nhất*/
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

int KiemTraNguyenTo(int n) {
    if(n < 2) {
        return 0;
    } else if(n > 2) {
        if(n % 2 == 0) {
            return 0;
        }
        for(int i = 3; i <= sqrt((float)n); i += 2) {
            if(n % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}

void LietKeCacDongCoNhieuSoNguyenToNhat(int a[][MAX], int dong, int cot) {
    int dem[MAX] = {0};
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            if(KiemTraNguyenTo(a[i][j]) == 1) {
                dem[i]++;
            }
        }
    }
    int Max = dem[0];
    for(int i = 1; i < dong; i++) {
        Max = (Max > dem[i]) ? Max : dem[i];
    }
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
    LietKeCacDongCoNhieuSoNguyenToNhat(a, dong, cot);

    return 0;
}

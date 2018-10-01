/* Bài 390(*): Liệt kê các cột nhiều chữ số nhất trong ma trận các số nguyên */
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
void LietKeCacCotCoNhieuChuSoNhat(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < cot; i++) {
        int dem[MAX] = {0};
        for(int i = 0; i < cot; i++) {
            for(int j = 0; j < dong; j++) {
                int tam = abs(a[j][i]);
                do {
                    dem[i]++;
                    tam /= 10;
                } while(tam > 0);
            }
        }
        int Max = dem[0];
        for(int i = 1; i < cot; i++) {
            Max = (Max > dem[i]) ? Max : dem[i];
        }
        for(int i = 0; i < cot; i++) {
            if(Max == dem[i]) {
                cout << i << " "  << Max << endl;
            }
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacCotCoNhieuChuSoNhat(a, dong, cot);

    return 0;
}

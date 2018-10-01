/* Bài 386: Liệt kê các cột có tổng nhỏ nhất*/
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
void LietKeCacCotCoTongNhoNhat(int a[][MAX], int dong, int cot) {
    int b[MAX] = {0};
    for(int i = 0; i < cot; i++) {
        for(int j = 0; j < dong; j++) {
            b[i] += a[j][i];
        }
    }
    // Tổng min
    int Min = b[0];
    for(int i = 1; i < cot; i++) {
        Min = (Min < b[i]) ? Min : b[i];
    }
    //Liet ke Tong Min
    for (int i = 0; i < cot ; i++) {
        if (Min == b[i]) {
            cout << i << " " << Min << endl;
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacCotCoTongNhoNhat(a, dong, cot);

    return 0;
}

/* Bài 361: Liệt kê các dòng trong ma trận các số thực thỏa mãn đồng thời các điều kiện sau: dòng có chứa giá trị âm, giá trị 0 và giá trị dương*/
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
void LietKeCacDongCoGiaTriAmVaDuongVa0(int a[][MAX], int dong, int cot) {
    int n = dong * cot;
    int i, j;
    for(i = 0; i < dong; i++) {
        if(n > 2) {
            int flag[3] = {0};  // Tạo ra 1 mảng 3 giá trị đều là 0
            for (j = 0; j < cot; j++) {
                if (a[i][j] < 0) {
                    flag[0] = 1;
                } else if (a[i][j] == 0) {
                    flag[1] = 1;
                } else if (a[i][j] > 0) {
                    flag[2] = 1;
                }
                if(flag[0] + flag[1] + flag[2] == 3) {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}
int main() {
    int a[MAX][MAX], dong, cot;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    LietKeCacDongCoGiaTriAmVaDuongVa0(a, dong, cot);
    return 0;
}

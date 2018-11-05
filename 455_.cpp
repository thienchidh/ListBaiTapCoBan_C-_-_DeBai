/* Bài 455: Đếm số chẵn trong ma trận tam giác trênKỹ thuật đặt cờ hiệu*/

#include<bits/stdc++.h>
#define MAX 100

using namespace std;

void NhapMaTran(int a[][MAX], int &n) {
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void XuatMaTran(int a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int DemSoChanMaTranTamGiacTrenDuongCheoChinh(int a[][MAX], int n) {
    int dem = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i][j] % 2 == 0) {
                dem++;
            }
        }
    }
    return dem;
}

int DemSoChanMaTranTamGiacTrenDuongCheoPhu(int a[][MAX], int n) {
    int dem = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(a[i][j] % 2 == 0) {
                dem++;
            }
        }
    }
    return dem;
}
int main() {
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);


    int dem = DemSoChanMaTranTamGiacTrenDuongCheoChinh(a, n);
    int dem2 = DemSoChanMaTranTamGiacTrenDuongCheoPhu(a, n);
    cout << dem << " " << dem2 << endl;
    return 0;
}

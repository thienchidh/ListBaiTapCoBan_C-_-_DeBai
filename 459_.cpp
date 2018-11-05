/* Bài 459: Kiểm tra ma trận có phải là ma phương ko? Ma phương là khi tổng ptửtrên các dòng, cột và 2 chéo chính phụ bằng nhauSắp xếp*/
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
int KiemTraMaTranCoPhaiLaMaPhuong(int a[][MAX], int n) {
    int i, j, temp, s1, s2;
    // Tổng các phần tử trên đường chéo phụ và đường chéo chính
    for(s1 = s2 = i = 0; i < n; i++) {
        s1 += a[i][i];
        s2 += a[i][n - i - 1];
    }
    if(s1 != s2) {
        return 0;
    }
    temp = s1;
    // tổng các phần tử trên các dòng và các cột
    for(i = 0; i < n; i++) {
        for(s1 = s2 = j = 0; j < n; j++) {
            s1 += a[i][j];
            s2 += a[j][i];
        }
    }
    if(s1 != temp || s2 != temp) {
        return 0;
    }
}

int main() {
    int a[MAX][MAX],i, j, n, sDong, sCot;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    for(i = 0; i < n; i++) {
        for(sDong = sCot = j = 0; j < n; j++) {
            sDong += a[i][j];
            sCot += a[j][i];
        }
        cout << sDong << endl;
        cout << sCot << endl;

    }

    if(KiemTraMaTranCoPhaiLaMaPhuong(a, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

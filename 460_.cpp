/* Bài 460: Sắp chéo chính tăng dần */
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
void SapXepCheoChinhTangDan(int a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int min = a[i][i];       //Kiểm tra min(a[i][i] với các phần tử sau nó
            if(a[j][j] < min) {
                min = a[j][j];
                a[j][j] = a[i][i];
                a[i][i] = min;
            }
        }
    }
}

int main() {
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    SapXepCheoChinhTangDan(a, n);
    XuatMaTran(a, n);
    return 0;
}

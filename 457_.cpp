/* Bài 457: Kiểm tra ma trận có đối xứng wa chéo chính ko */
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

int KiemTraMaTranCoDoiXungQuaDuongCheoChinh(int a[][MAX], int n) {
    int flag = 1;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main() {
    int a[MAX][MAX], n;
    NhapMaTran(a,n);
    XuatMaTran(a,n);

    int flag = KiemTraMaTranCoDoiXungQuaDuongCheoChinh(a, n);
    if(flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}


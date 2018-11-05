/* Bài 463: Hoán vị 2 cột*/
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

void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void HoanVi2Cot(int a[][MAX], int n, int cot1, int cot2) {
    if((cot1 >= 0 && cot1 < n) && (cot2 >= 0 && cot2 < n)) {
        for(int i = 0; i < n; i++) {
            HoanVi(a[i][cot1], a[i][cot2]);
        }
    }
}

int main() {
    int a[MAX][MAX], n, cot1, cot2;
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    cin >> cot1 >> cot2;

    HoanVi2Cot(a, n, cot1, cot2);

    XuatMaTran(a, n);

    return 0;
}

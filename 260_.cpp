/* Bài 260: Cho 2 mảng a, b. Hãy cho biết mảng b có phải là hoán vị của mảng a không*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 100
template <typename T> void nhap (T a[], int &n) {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
template <typename T>void xuat(T a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
/*
Khái niệm hoán vị diễn tả ý tưởng rằng những đối tượng phân biệt có thể được sắp xếp theo những thứ tự khác nhau.
Ví dụ, với các số từ một đến sáu, mỗi cách sắp thứ tự sẽ tạo thành một dãy các số không lặp lại.
Một hoán vị như thế là: "3, 4, 6, 1, 2, 5".

*/
void HoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void SapXepTangDan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

void KiemTraBCoPhaiLaHoanViCuaA(int a[],int b[], int na, int nb) {
    if(na != nb) {
        cout << "NO"<< endl;      // Số lượng phần tử phải bằng nhau
        return;
    }
    SapXepTangDan(a, na);           // Sắp xếp mảng a
    SapXepTangDan(b, nb);           // Sắp xếp mảng b
    for(int i = 0; i < na; i++) {
        if(a[i] != b[i]) {
            cout << "NO"<< endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main() {
    int na, nb;
    int a[MAX], b[MAX];

    nhap(a, na);
    xuat(a, na);

    nhap(b, nb);
    xuat(b, nb);

    KiemTraBCoPhaiLaHoanViCuaA(a, b, na, nb);

    return 0;
}

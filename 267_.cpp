/* Bài 267: Viết hàm nhập mảng sao cho khi nhập xong thì giá trị trong mảng sắp xếp giảm dần*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 100
template <typename T> void nhap (T a[], int &n) {
    do {
        cin >> n;
    } while(n <= 0 || n > MAX);

    int i, j, k;
    for(i = 0; i < n; i++) {
        cin >> a[i];
        for(j = 0; j < i; j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                for(k = i; k > j; k--) {
                    a[k] = a[k - 1];
                }
                a[j] = temp;
                break;
            }
        }
    }
}
template <typename T>void xuat(T a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);


    return 0;
}

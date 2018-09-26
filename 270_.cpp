/* Bài 270: Nhập mảng sau khi nhập xong đã tự sắp xếp tăng dầnKỹ thuật xóa*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 100
void nhap (int a[], int &n) {
    cin >> n;

    int i, j, k;
    for(i = 0; i < n; i++) {
        cin >> a[i];
        for(j = 0; j < i; j++) {
            if(a[i] < a[j]) {
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

void xuat(int a[], int n) {
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

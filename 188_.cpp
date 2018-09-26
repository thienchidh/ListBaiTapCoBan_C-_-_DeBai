/* Bài 188: Hãy liệt kê các vị trí chẵn lớn nhất trong mảng 1 chiều các số nguyên */
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

int TimChanDau(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            return a[i];
        }
    }
    return -1;
}

int TimChanLonNhat(int a[], int n) {
    int ChanMax = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] % 2 == 0 && a[i] > ChanMax) {
            ChanMax = a[i];
        }
    }
    return ChanMax;
}

void LietKeViTriChanLonNhat(int a[], int n) {
    int ChanMax = TimChanLonNhat(a, n);
    for(int i = 0; i < n; i++) {
        if(a[i] == ChanMax) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    int a[MAX];

    nhap(a, n);
    xuat(a, n);

    int ViTriChanDau = TimChanDau(a, n);

    if(ViTriChanDau == -1) {
        cout << "-1\n";
    } else {
        LietKeViTriChanLonNhat(a, n);
    }

    return 0;
}

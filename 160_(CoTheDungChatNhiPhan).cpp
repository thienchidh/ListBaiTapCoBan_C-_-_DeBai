/* Bài 160: Cho mảng 1 chiều các số thực, hãy tìm giá trị âm cuối cùng lớn hơn giátrị -1. Nếu mảng không có giá trị thỏa điều kiện trên thì trả về -1*/
#include<bits/stdc++.h>
using namespace std;
void nhap (float *a, int &n) {
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void xuat(float *a, int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

float findBiggestValueSmallerThanZero(float *a, int n) {
    int ll = 0, rr = n-1, i = (ll + rr)/2;

    while(i != ll && i != rr){
        if(a[i] < 0){
            ll = i;
        }else{
            rr = i;
        }

        i = (ll + rr)/2;
    }

    for(i = (ll + rr)/2; i >= ll; i--) {
        if(a[i] < 0) {
            return a[i];
        }
    }
    return -1;
}

int main() {
    int n;
    float *a;
    cin >> n;

    a = new float[n];
    nhap(a, n);

    sort(a, a + n);// nlogn
    xuat(a, n);

    cout << findBiggestValueSmallerThanZero(a, n);// logn
    // in this case, linear search better

    delete[]a;
    return 0;
}

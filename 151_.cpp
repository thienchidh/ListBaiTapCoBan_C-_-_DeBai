/* Bài 151: Hãy tìm số nguyên tố lớn nhất trong mảng 1 chiều các số nguyên. Nếu mảng không có số nguyên tố thì trả về -1*/
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2) {
        return false;
    }
    for(int i = 2; i<= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int findMaxPrime(int *a, int n) {
    int Max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(isPrime(a[i]) && a[i] > Max) {
            Max = a[i];
        }
    }
    if(Max == INT_MIN) {
        return -1;
    }
    return Max;
}

int main() {
    int *a;
    int n;
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << findMaxPrime(a, n) << "\n";

    delete[] a;

    return 0;
}

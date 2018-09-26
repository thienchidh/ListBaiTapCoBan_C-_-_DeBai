//Bài 82: Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c
#include <bits/stdc++.h>

#define ll long long int

using namespace std;

double a, b;

int main() {
    cin >> a >> b;

    if(a * b > 0){
        cout << "YES" << endl;
    }else
        cout << "NO" << endl;

    return 0;
}

/* Bài 97: Viết chương trình nhập 3 cạnh của 1 tam giác, cho biết đó là tam giác gì */
#include<bits/stdc++.h>
using namespace std;

void KiemTraTamGiac(int a, int b, int c) {
    if(a + b <= c || a + c <= b ||  b + c <= a) {
        cout << "tam giac khong hop le\n" ;
    } else {
        cout << "day la tam giac: ";
        if((a == b) && (b == c)) {
            cout << " deu\n";
        } else {
            if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c) {
                cout << " vuong";
            }
            if(a == b || a == c || b == c) {
                cout << " can\n";
            } else {
                cout << " thuong\n";
            }
        }
    }
}

int a[3];

int main() {
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    KiemTraTamGiac(a[0], a[1], a[2]);

    return 0;
}

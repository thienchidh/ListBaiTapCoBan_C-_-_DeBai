/* Bài 100: Viết chương trình giải phương trình bậc 2*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c; // Khai báo.
    cin >> a >> b >> c;
    if (a == 0) { // pt có dạng: bx + c = 0
        if (b == 0) { // pt có dạng: c = 0
            if (c == 0) {
                cout << "\nPhuong trinh co vo so nghiem"<< endl;
            } else {
                cout << "\nPhuong trinh vo nghiem"<< endl;
            }
        } else {

            float x = -c / b;

            cout << "\nPhuong trinh co nghiem duy nhat x = " << x << endl;
        }
    } else {
        float Denta = b * b - 4 * a * c;

        if (Denta < 0) {
            cout << "\nPhuong trinh vo nghiem"<< endl;
        } else if (Denta == 0) {
            float x = -b / (2 * a);

            cout << "\nPhuong trinh co nghiem kep x1 = x2 = " << x << endl;
        } else { // Denta > 0
            float x1 = (-b + sqrt(Denta)) / (2 * a);
            float x2 = (-b - sqrt(Denta)) / (2 * a);
            cout << "\nPhuong trinh co 2 nghiem phan biet:\nx1 = "<< x1 <<"\nx2 = "<<x2 << endl;
        }
    }
    return 0;
}

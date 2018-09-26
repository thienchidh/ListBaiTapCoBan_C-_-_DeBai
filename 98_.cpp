/* Bài 98: Lập chương trình giải hệ: ax + by = cDx + ey = f. Các hệ số nhập từ bàn phím*/
#include<bits/stdc++.h>
using namespace std;

// Giải hệ
/*
ax + by = c
dx + ey = f
*/
const int VoNghiem = 0, KhongXacDinh = -1;
int GiaiHePhuongTrinh(int a, int b, int c, int d, int e, int f, int &x, int &y) {
    int D = a * e - d * b;
    int Dx = c * e - f * b;
    int Dy = a * f - d * c;

    int SoNghiem;
    if(D != 0) {
        x = Dx / D;
        y = Dy / D;
        cout << "\nHe phuong trinh co 1 nghiem duy nhat: "<< x <<" va " << y;
        SoNghiem = 1;
    } else {
        if(Dx != 0 || Dy != 0) {
            cout << "\nHe phuong trinh vo nghiem ";
            SoNghiem = 0;
        } else if(Dx == Dy == 0) {
            cout << "\nHe phuong trinh vo so nghiem ";
            SoNghiem = -1;
        }
    }
    return SoNghiem;
}
int main() {
    int a, b, c, d, e, f, x, y;

    cin >> a >> b>> c>> d>> e >> f;

    int SoNghiem = GiaiHePhuongTrinh(a, b, c, d, e, f, x, y);

    return 0;
}

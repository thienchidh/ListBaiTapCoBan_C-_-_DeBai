/* Bài 479: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đơn thức P(x) = ax^n trong toán học và định nghĩa và định nghĩa hàm nhập, hàm xuất cho kiểu dữliệu này*/
#include<bits/stdc++.h>
using namespace std;
struct DonThuc {
    float a;
    int n;
};
typedef struct DonThuc DONTHUC;

void NhapDonThuc(DONTHUC &);
void XuatDonThuc(DONTHUC);

void NhapDonThuc(DONTHUC &dt) {
    float temp;
    scanf("%f", &temp);
    dt.a = temp;

    scanf("%d", &dt.n);
}

void XuatDonThuc(DONTHUC dt) {
    cout << dt.a << " " << dt.n << endl;
}

int main() {
    DONTHUC dt;
    NhapDonThuc(dt);
    XuatDonThuc(dt);

    return 0;
}

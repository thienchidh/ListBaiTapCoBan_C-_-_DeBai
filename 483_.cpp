/* Bài 483: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đường tròn trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;

struct Diem {
    float x;
    float y;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);

struct DuongTron {
    DIEM I;
    float R;
};
typedef struct DuongTron DUONGTRON;

void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON);

void NhapDiem(DIEM &d) {
    float temp;
    scanf("%f", &temp);
    d.x = temp;

    scanf("%f", &temp);
    d.y = temp;
}

void XuatDiem(DIEM d) {
    printf("(%.3f, %.3f)", d.x, d.y);
}

void NhapDuongTron(DUONGTRON &dt) {
    float temp;
    NhapDiem(dt.I);
    scanf("%f", &temp);
    dt.R = temp;
}

void XuatDuongTron(DUONGTRON dt) {
    printf("((%.3f, %.3f), %.3f)", dt.I.x, dt.I.y, dt.R);
}

int main() {
    DIEM d;
    DUONGTRON dt;
    NhapDuongTron(dt);
    XuatDuongTron(dt);
    return 0;
}

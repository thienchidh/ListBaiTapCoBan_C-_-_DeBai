/* Bài 484: Viết chương trình nhập tọa độ tâm và bán kính của 1 đường tròn trongmặt phẳng Oxy. Tính diện tích và chu vi của nó và xuất ra kết quả*/
#include<bits/stdc++.h>
using namespace std;

struct diem {
    float x;
    float y;
};
typedef struct diem DIEM;
void NhapDiem(DIEM &);
void XuatDiem(DIEM);

struct duongtron {
    DIEM I;
    float R;
};
typedef struct duongtron DUONGTRON;
void NhapDuongTron(DUONGTRON &);
void XuatDuongTron(DUONGTRON);
float TinhDienTich(DUONGTRON);
float TinhChuVi(DUONGTRON);

void NhapDiem(DIEM &P) {
    float temp;
    scanf("%f", &temp);
    P.x = temp;

    scanf("%f", &temp);
    P.y = temp;
}

void XuatDiem(DIEM P) {
    printf("(%f, %f)\n", P.x, P.y);
}

void NhapDuongTron(DUONGTRON &c) {
    NhapDiem(c.I);
    float temp;
    scanf("%f", &temp);
    c.R = temp;
}

void XuatDuongTron(DUONGTRON c) {
    XuatDiem(c.I);
    printf("%f\n", c.R);
}

float TinhDienTich(DUONGTRON c) {
    return 3.14 * c.R * c.R;
}

float TinhChuVi(DUONGTRON c) {
    return 2 * 3.14 * c.R;
}

int main() {
    DIEM P;
    DUONGTRON c;

    NhapDuongTron(c);
    XuatDuongTron(c);
    float DienTich = TinhDienTich(c);
    float ChuVi = TinhChuVi(c);

    printf("%.3f\n", DienTich);
    printf("%.3f\n", ChuVi);
    return 0;
}

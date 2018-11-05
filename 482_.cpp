/* Bài 482: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm đường thẳng ax + by + c = 0 trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;
struct DuongThang {
    float a;
    float b;
    float c;
};
typedef struct DuongThang DUONGTHANG;

void NhapDuongThang(DUONGTHANG &);
void XuatDuongThang(DUONGTHANG);

void NhapDuongThang(DUONGTHANG &dt) {
    float temp;
    scanf("%f", &temp);
    dt.a = temp;

    scanf("%f", &temp);
    dt.b = temp;

    scanf("%f", &temp);
    dt.c = temp;
}

void XuatDuongThang(DUONGTHANG dt) {
    printf("%.3fx + %.3fy + %.3f = 0", dt.a, dt.b, dt.c);
}

int main() {
    DUONGTHANG dt;
    NhapDuongThang(dt);
    XuatDuongThang(dt);
    return 0;
}

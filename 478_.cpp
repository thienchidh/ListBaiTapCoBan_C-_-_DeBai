/* Bài 478: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong không gian Oxyz và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;
struct DiemKG {
    float x;
    float y;
    float z;
};
typedef struct DiemKG DIEMKG;

void NhapDiemKG(DIEMKG &);
void XuatDiemKG(DIEMKG);

void NhapDiemKG(DIEMKG &d) {
    float temp;
    scanf("%f", &temp);
    d.x = temp;

    scanf("%f", &temp);
    d.y = temp;

    scanf("%f", &temp);
    d.z = temp;
}

void XuatDiemKG(DIEMKG d) {
    cout << d.x << " " << d.y << " " << d.z << endl;
}

int main() {
    DiemKG d;
    NhapDiemKG(d);
    XuatDiemKG(d);

    return 0;
}

/* Bài 477: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳngOxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;
struct Diem {
    float x;
    float y;
};

typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);

void NhapDiem(DIEM &d) {
    float temp;
    scanf("%f", &temp);
    d.x = temp;

    scanf("%f", &temp);
    d.y = temp;
}

void XuatDiem(DIEM d) {
    cout << d.x << " " << d.y << endl;
}

int main() {
    DIEM d;
    NhapDiem(d);
    XuatDiem(d);

    return 0;
}

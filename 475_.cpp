/* Bài 475: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm phân số trong toán họcvà định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;
// Khai báo kiểu dữ liệu cấu trúc phân số
struct PhanSo {
    int TuSo, MauSo;
};

typedef struct PhanSo PHANSO;

void NhapPhanSo(PHANSO &);
void XuatPhanSo(PHANSO);

void NhapPhanSo(PHANSO &ps) {
    scanf("%d", &ps.TuSo);
    scanf("%d", &ps.MauSo);
}

void XuatPhanSo(PHANSO ps) {
    printf("%d/%d", ps.TuSo, ps.MauSo);
}
int main() {
    PHANSO ps;
    NhapPhanSo(ps);
    XuatPhanSo(ps);
    return 0;
}

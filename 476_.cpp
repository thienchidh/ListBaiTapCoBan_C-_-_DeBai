/* Bài 476: Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học vàđịnh nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này*/
#include<bits/stdc++.h>
using namespace std;

struct HonSo {
    int Tu;
    int Mau;
    int Nguyen;
};
typedef struct HonSo HONSO;

void NhapHonSo(HONSO &);
void XuatHonSo(HONSO);

void NhapHonSo(HONSO &hs) {
    scanf("%d", &hs.Nguyen);

    scanf("%d", &hs.Tu);

    scanf("%d", &hs.Mau);
}

void XuatHonSo(HONSO hs) {
    printf("%d(%d/%d)", hs.Nguyen, hs.Tu, hs.Mau);
}

int main() {
    HONSO hs;
    NhapHonSo(hs);
    XuatHonSo(hs);

    return 0;
}

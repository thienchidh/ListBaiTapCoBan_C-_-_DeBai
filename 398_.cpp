/* Bài 398: Dịch phải xoay vòng theo chiều kim đồng hồ các giá trị nằm trên biên ma trận*/
#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void NhapMang(int a[][MAX], int &dong, int &cot) {
    cin >> dong >> cot;
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cin >> a[i][j];
        }
    }
}

void XuatMang(int a[][MAX], int dong, int cot) {
    for(int i = 0; i < dong; i++) {
        for(int j = 0; j < cot; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void DichPhaiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(int a[][MAX], int dong, int cot) {
    int i, j;
    int temp = a[0][0]; // lấy đi 1 ô tạo chỗ trống để dịch chuyển

    // dịch chuyển cột bên trái lên trên
    for(i = 0, j = i; i < dong - 1; i++) { // giả sử dòng = 4, cột = 5
        a[i][j] = a[i + 1][j]; // chạy từ i = 0 đến i = 3 thì dừng, j = 0
    }
    // dịch chuyển hàng dưới từ phải qua trái
    for (j, i; j < cot - 1; j++) {
        a[i][j] = a[i][j + 1]; // i = 3, j chạy từ 0 đến 4 thì dừng
    }
    // dịch chuyển cột bên phải từ trên xuống
    for (i, j; i > 0; i--) {
        a[i][j] = a[i - 1][j]; // i chạy từ 3 về 0 thì dừng, j = 4
    }
    // dịch chuyển hàng trên từ trái qua phải
    for (i, j; j > 1; j--) {
        a[i][j] = a[i][j - 1]; // i = 0, j chạy từ 4 về 1 thì dừng
    }
    // dịch chuyển xong bỏ ô kia về để lấp đầy ma trận
    a[0][1] = temp;
}
int main() {
    int a[MAX][MAX], dong, cot;
    int cot1, cot2;
    NhapMang(a, dong, cot);
    XuatMang(a, dong, cot);
    DichPhaiXoayVongTheoChieuKimDongHoCacGiaTriNamTrenBien(a, dong, cot);
    XuatMang(a, dong, cot);
    return 0;
}

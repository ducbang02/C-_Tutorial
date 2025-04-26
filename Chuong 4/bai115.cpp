// bai115.cpp
// Viết chương trình nhập tên, điểm toán, điểm văn của một học sinh. Tính điểm trung bình và xuất kết quả.

#include <iostream>
#include <string>
using namespace std;

void nhapThongTin(string &ten, double &toan, double &van) {
    cout << "Nhap ten hoc sinh: ";
    getline(cin, ten);
    cout << "Nhap diem Toan: ";
    cin >> toan;
    cout << "Nhap diem Van: ";
    cin >> van;
}

double tinhDiemTrungBinh(double toan, double van) {
    return (toan + van) / 2.0;
}

void xuatKetQua(const string &ten, double dtb) {
    cout << "Hoc sinh: " << ten << endl;
    cout << "Diem trung binh: " << dtb << endl;
}

int main() {
    string ten;
    double toan, van;
    nhapThongTin(ten, toan, van);
    double dtb = tinhDiemTrungBinh(toan, van);
    xuatKetQua(ten, dtb);
    return 0;
}


#include <iostream>
using namespace std;

// Bài 115: Nhập tên, điểm toán, điểm văn, tính điểm trung bình và xuất kết quả
int main() {
    string ten;
    float toan, van;
    cout << "Nhap ten hoc sinh: ";
    getline(cin, ten);
    cout << "Nhap diem toan va diem van: ";
    cin >> toan >> van;
    float dtb = (toan + van) / 2;
    cout << "Hoc sinh: " << ten << ", Diem trung binh: " << dtb << endl;
    return 0;
}


#include <iostream>
using namespace std;

// Bài 105: Đọc số nguyên có hai chữ số
int main() {
    int n;
    cout << "Nhap so nguyen co 2 chu so: ";
    cin >> n;
    if (n < 10 || n > 99) {
        cout << "Khong hop le!" << endl;
        return 0;
    }
    string hangChuc[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    string donVi[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    cout << hangChuc[n / 10] << " " << donVi[n % 10] << endl;
    return 0;
}

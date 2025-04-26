
#include <iostream>
using namespace std;

// Bài 85: Nhập tháng, cho biết tháng thuộc quý nào
int main() {
    int month;
    cout << "Nhap thang: ";
    cin >> month;
    if (month < 1 || month > 12)
        cout << "Thang khong hop le" << endl;
    else
        cout << "Thang nay thuoc quy " << ((month - 1) / 3 + 1) << endl;
    return 0;
}

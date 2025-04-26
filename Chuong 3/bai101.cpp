
#include <iostream>
using namespace std;

// Bài 101: Cho biết tháng có bao nhiêu ngày
int main() {
    int month, year;
    cout << "Nhap thang va nam: ";
    cin >> month >> year;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Thang co 31 ngay" << endl; break;
        case 4: case 6: case 9: case 11:
            cout << "Thang co 30 ngay" << endl; break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                cout << "Thang co 29 ngay" << endl;
            else
                cout << "Thang co 28 ngay" << endl;
            break;
        default:
            cout << "Thang khong hop le" << endl;
    }
    return 0;
}

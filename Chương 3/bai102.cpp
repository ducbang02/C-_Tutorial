
#include <iostream>
using namespace std;

// Bài 102: Tìm ngày kế tiếp
int main() {
    int day, month, year;
    cout << "Nhap ngay, thang, nam: ";
    cin >> day >> month >> year;
    int dmax;
    switch (month) {
        case 4: case 6: case 9: case 11: dmax = 30; break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) dmax = 29;
            else dmax = 28;
            break;
        default: dmax = 31;
    }
    day++;
    if (day > dmax) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
    cout << "Ngay ke tiep la: " << day << "/" << month << "/" << year << endl;
    return 0;
}


#include <iostream>
using namespace std;

// Bài 103: Tìm ngày trước đó
int main() {
    int day, month, year;
    cout << "Nhap ngay, thang, nam: ";
    cin >> day >> month >> year;
    int dmax;
    day--;
    if (day == 0) {
        month--;
        if (month == 0) {
            month = 12;
            year--;
        }
        switch (month) {
            case 4: case 6: case 9: case 11: dmax = 30; break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) dmax = 29;
                else dmax = 28;
                break;
            default: dmax = 31;
        }
        day = dmax;
    }
    cout << "Ngay truoc do la: " << day << "/" << month << "/" << year << endl;
    return 0;
}

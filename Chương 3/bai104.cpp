
#include <iostream>
using namespace std;

// Bài 104: Tính ngày thứ bao nhiêu trong năm
int main() {
    int day, month, year, total = 0;
    cout << "Nhap ngay, thang, nam: ";
    cin >> day >> month >> year;
    int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        daysInMonth[1] = 29;
    for (int i = 0; i < month - 1; i++)
        total += daysInMonth[i];
    total += day;
    cout << "Day thu " << total << " trong nam." << endl;
    return 0;
}

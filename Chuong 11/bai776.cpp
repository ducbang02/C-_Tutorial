#include <iostream>
using namespace std;

// 776. Khai báo biến con trỏ p để chứa 100 số nguyên, cấp phát và thu hồi bộ nhớ động

int main()
{
    int *p;           // Khai báo con trỏ p
    p = new int[100]; // Cấp phát bộ nhớ cho 100 số nguyên

    // Ví dụ: gán và in thử giá trị
    for (int i = 0; i < 100; i++)
    {
        p[i] = i + 1;
    }

    cout << "Gia tri cua p[0] la: " << p[0] << endl;

    delete[] p; // Thu hồi lại bộ nhớ đã cấp phát
    return 0;
}

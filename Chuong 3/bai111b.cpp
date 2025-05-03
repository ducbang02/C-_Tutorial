
#include <iostream>
using namespace std;

// Bài 111: In tam giác cân đặc (a)
int main()
{
    int h;
    cout << "Nhap chieu cao h: ";
    cin >> h;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == h)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

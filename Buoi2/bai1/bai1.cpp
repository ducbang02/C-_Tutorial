#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int b = 93434897;
    int a = 985;
    // cout<<(a / 10);
    int dem = 0;

    while (b > 0)
    {
        dem = dem + 1;
        b = b / 10;
    }

    cout << dem;

    // i++, ++i
    int i = 2;

    // cout<<i<<"\n";
    // i = 3
    // ketQua = 2 + 4 + 4 + 3;

    int ketQua = i++ + ++i + i-- + i--;
    cout << ketQua;
}

// build & run, run
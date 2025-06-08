#include <iostream>
#include <math.h>

using namespace std;
// 714. Thap Ha Noi

void Chuyen(int n, char from, char temp, char to)
{
    if (n == 1)
    {
        cout << "Chuyen dia 1 tu " << from << " -> " << to << endl;
        return;
    }

    Chuyen(n - 1, from, to, temp);                                        // Bước 1
    cout << "Chuyen dia " << n << " tu " << from << " -> " << to << endl; // Bước 2
    Chuyen(n - 1, temp, from, to);                                        // Bước 3
}

int main()
{
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    Chuyen(n, 'A', 'B', 'C');
    return 0;
}

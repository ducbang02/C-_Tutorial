#include <iostream>
using namespace std;

// 770. Hãy khai báo biến con trỏ cấu trúc phần số có tên là p.
typedef struct PhanSo
{
    int tuSo;
    int mauSo;
} PHANSO;

int main()
{

    PHANSO *p = new PHANSO;
    cout << "Dia chi p la: " << p << endl;
    delete p;
    return 0;
}
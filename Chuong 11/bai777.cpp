#include <iostream>
using namespace std;

// 777. Viết hàm hoán vị 2 số nguyên bằng con trỏ

void hoanVi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Truoc khi hoan vi: x = " << x << ", y = " << y << endl;

    hoanVi(&x, &y); // Gọi hàm với địa chỉ của x và y

    cout << "Sau khi hoan vi: x = " << x << ", y = " << y << endl;

    return 0;
}

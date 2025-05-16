#include <iostream>
using namespace std;

// 769. Hãy viết đoạn chương trình để khai báo biến số nguyên a và xuất ra
// địa chỉ ô nhớ được cấp phát cho biến này khi chương trình chạy.
int main()
{
    int a = 10; // khai báo và khởi tạo biến a
    cout << "Dia chi cua bien a la: " << &a << endl;
    return 0;
}
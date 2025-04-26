
#include <iostream>
using namespace std;

// Bài 97: Kiểm tra 3 cạnh tam giác
int main() {
    float a, b, c;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            cout << "Tam giac deu" << endl;
        else if (a == b || b == c || a == c)
            cout << "Tam giac can" << endl;
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            cout << "Tam giac vuong" << endl;
        else
            cout << "Tam giac thuong" << endl;
    } else {
        cout << "Khong phai tam giac" << endl;
    }
    return 0;
}

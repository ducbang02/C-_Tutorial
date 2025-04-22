
#include <iostream>
using namespace std;

// Bài 121: Viết chương trình đảo ngược chuỗi
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    reverse(s.begin(), s.end());
    cout << "Chuoi dao nguoc: " << s << endl;
    return 0;
}


#include <iostream>
using namespace std;

// Bài 118: Đếm số từ trong chuỗi
int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    int count = 0;
    bool inWord = false;
    for (char c : s) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    cout << "So tu trong chuoi: " << count << endl;
    return 0;
}

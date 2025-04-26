
#include <iostream>
using namespace std;

// Bài 94: In ra tất cả các số lẻ nhỏ hơn 100 trừ các số 5, 7, 93
int main() {
    for (int i = 1; i < 100; i += 2) {
        if (i == 5 || i == 7 || i == 93) continue;
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

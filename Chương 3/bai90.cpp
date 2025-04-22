
#include <iostream>
using namespace std;

// Bài 90: Tìm m lớn nhất sao cho 1 + 2 + ... + m < N
int main() {
    int N, m = 0, sum = 0;
    cout << "Nhap N: ";
    cin >> N;
    while (sum + m + 1 < N) {
        m++;
        sum += m;
    }
    cout << "Gia tri m lon nhat la: " << m << endl;
    return 0;
}

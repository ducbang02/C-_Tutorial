
#include <iostream>
using namespace std;

// Bài 89: Tính tổng các số lẻ nhỏ hơn N
int main() {
    int N, sum = 0;
    cout << "Nhap N: ";
    cin >> N;
    for (int i = 1; i < N; i += 2)
        sum += i;
    cout << "Tong so le < N: " << sum << endl;
    return 0;
}

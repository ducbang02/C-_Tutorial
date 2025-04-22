
#include <iostream>
using namespace std;

// Bài 110: Tìm các phương án có tổng 200.000đ từ 3 loại giấy 1000đ, 2000đ, 5000đ
int main() {
    for (int i = 0; i <= 200; i++) {
        for (int j = 0; j <= 100; j++) {
            for (int k = 0; k <= 40; k++) {
                if (i * 1000 + j * 2000 + k * 5000 == 200000) {
                    cout << "1000d: " << i << ", 2000d: " << j << ", 5000d: " << k << endl;
                }
            }
        }
    }
    return 0;
}

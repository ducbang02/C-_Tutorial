// bai121.cpp
// Liệt kê tất cả các số Amstrong trong đoạn [1, 1.000.000].

#include <iostream>
#include <cmath>
using namespace std;

bool laAmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    cout << "Cac so Amstrong tu 1 den 1000000: ";
    for (int i = 1; i <= 1000000; i++) {
        if (laAmstrong(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

// Bài 106: Đọc số nguyên có ba chữ số
int main() {
    int n;
    cout << "Nhap so nguyen co 3 chu so: ";
    cin >> n;
    if (n < 100 || n > 999) {
        cout << "Khong hop le!" << endl;
        return 0;
    }
    string hangTram[] = {"", "mot tram", "hai tram", "ba tram", "bon tram", "nam tram", "sau tram", "bay tram", "tam tram", "chin tram"};
    string hangChuc[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
    string donVi[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};

    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donvi = n % 10;

    cout << hangTram[tram] << " ";
    if (chuc == 0 && donvi != 0) cout << "le ";
    else if (chuc > 0) cout << hangChuc[chuc] << " ";
    if (donvi > 0) cout << donVi[donvi];
    cout << endl;

    return 0;
}

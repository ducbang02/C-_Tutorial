// 258. Hãy sắp xếp các số nguyên tố trong mảng các số nguyên tăng dần các
// giá trị khác giữ nguyên giá trị và vị trí (nguyentotang).

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool LaNguyenTo(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void NguyenToTang(int array[], int n)
{
    vector<int> vitri, giatri;

    // B1: Lưu vị trí và giá trị các số nguyên tố
    for (int i = 0; i < n; i++)
    {
        if (LaNguyenTo(array[i]))
        {
            vitri.push_back(i);
            giatri.push_back(array[i]);
        }
    }

    // B2: Sắp xếp các giá trị nguyên tố tăng dần
    sort(giatri.begin(), giatri.end());

    // B3: Gán lại các số nguyên tố đã sắp xếp vào vị trí ban đầu
    for (int i = 0; i < vitri.size(); i++)
    {
        array[vitri[i]] = giatri[i];
    }
}

void XuatMang(int array[], int n)
{
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}

int main()
{
    int array[] = {10, 3, 1, 8, 11, 6, 7, 4};
    int n = sizeof(array) / sizeof(array[0]);

    NguyenToTang(array, n);
    XuatMang(array, n);

    return 0;
}

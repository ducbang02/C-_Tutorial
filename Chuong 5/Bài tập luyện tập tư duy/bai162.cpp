// bai162.cpp
// 162. Cho mảng một chiều các số thực, hãy viết hàm tìm một vị trí trong mảng
// thỏa hai điều kiện: có hai giá trị lân cận và giá trị tại vị trí đó bằng tích hai
// giá trị lân cận, nếu mảng không tồn tại giá trị như vậy thì hàm trả về giá trị -1.

#include <iostream>
using namespace std;

int ViTri(float array[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (array[i] == array[i - 1] * array[i + 1])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 6;
    float array[6] = {5.5, 1.2, 2.3, 2, 5, 7};
    cout << "Vi tri thoa man: " << ViTri(array, n);
    return 0;
}

// bai166.cpp
// bai166. Cho mảng một chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên
// trong mảng có dạng 2^k. Nếu mảng không tồn tại giá trị dạng 2^k thì hàm sẽ trả
// về giá trị 0.

#include <iostream>
#include <cmath>
using namespace std;

int Tim2k(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            float var = log2(array[i]);
            if (var == floor(var))
            {
                return array[i];
            }
        }
    }
    return 0;
}

int main()
{
    int n = 5;
    int array[] = {21, 56, 33, 16, 32};
    cout << Tim2k(array, n);
    return 0;
}

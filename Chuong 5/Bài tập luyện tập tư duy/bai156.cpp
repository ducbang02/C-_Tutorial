// bai156.cpp
// Viết chương trình bài 156.

#include <iostream>
#include <cmath>

using namespace std;

// 156. Tìm giá trị trong mảng các số thực "Xa giá trị x nhất" (gannhat)
//  ví dụ mảng array = {24, 45, 23, 13, 43, -12}
//   x = 15 thì khoảng cách x và 45 là xa nhất
float GanNhat(float array[], int n, float x)
{
    float minDistance = fabs(array[0] - x);
    float result = array[0];

    for (int i = 1; i < n; ++i)
    {
        float dist = fabs(array[i] - x);
        if (dist < minDistance)
        {
            minDistance = dist;
            result = array[i];
        }
    }

    return result;
}

int main()
{
    int n = 6;
    float array[n] = {24, 45, 23, 13, 43, -12};
    int x = 15;

    cout << "Khoang cach xa nhat la: " << GanNhat(array, n, x);

    return 0;
}

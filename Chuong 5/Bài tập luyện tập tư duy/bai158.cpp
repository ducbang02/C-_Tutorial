// bai158.cpp
// bai158. Cho mảng 1 chiều các số thực, hãy tìm x sao cho đoạn [-x, x]
// chứa tất cả các giá trị trong mảng (timx)
// cách 1: Có thể làm giống bài 158, nhưng sau tìm min max thì so sánh trị tuyệt đối
// số nào lớn hơn thì gán cho số đó là x, từ đó sẽ suy ra -x

// cách 2: bên dưới
#include <iostream>
#include <cmath>
using namespace std;

float TimX(float array[], int n)
{
    float maxAbs = fabs(array[0]);
    for (int i = 1; i < n; i++)
    {
        if (fabs(array[i]) > maxAbs)
        {
            maxAbs = fabs(array[i]);
        }
    }
    return maxAbs;
}

int main()
{
    int n = 6;
    float array[n] = {5.6, 2, 9, 19.3, 5, -25};
    float x = TimX(array, n);
    cout << "Doan[-x, x] chua ta ca cac gia tri la: " << "[" << -x << ", " << x << "]";
    return 0;
}

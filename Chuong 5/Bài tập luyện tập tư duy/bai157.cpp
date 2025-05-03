// bai157.cpp
// //bai157. Cho mảng 1 chiều các số thực, hãy tìm đoạn [a, b] sao cho
// đoạn này chứa tất cả các giá trị trong mảng (timdoan)

#include <iostream>
using namespace std;

pair<float, float> TimDoan(float array[], int n)
{
    float min = array[0];
    float max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return {min, max};
}

int main()
{
    int n = 6;
    float array[n] = {5.6, 2, 9, 19.3, 5, -25};
    pair<float, float> result = TimDoan(array, n);
    cout << "Doan[a, b] chua ta ca cac gia tri la: " << "[" << result.first << ", " << result.second << "]";
    return 0;
}

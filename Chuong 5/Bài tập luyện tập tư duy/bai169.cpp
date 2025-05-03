// bai169.cpp
// Tìm số chẵn lớn nhất nhỏ hơn mọi giá trị lẻ trong mảng

#include <iostream>
#include <climits> // dùng INT_MAX, INT_MIN
using namespace std;

// Tìm số lẻ nhỏ nhất trong mảng
int SoLeNN(int array[], int n)
{
    int min = INT_MAX;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0 && array[i] < min)
        {
            min = array[i];
            found = true;
        }
    }
    return found ? min : -1; // nếu không có số lẻ, trả về -1
}

// Tìm số chẵn lớn nhất < mọi số lẻ trong mảng
int SoChanLon(int array[], int n)
{
    int minLe = SoLeNN(array, n);
    if (minLe == -1) // Không có số lẻ
        return 0;

    int max = INT_MIN;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0 && array[i] < minLe && array[i] > max)
        {
            max = array[i];
            found = true;
        }
    }

    return found ? max : 0; // Nếu không có số chẵn thỏa mãn thì trả về 0
}

int main()
{
    int n = 6;
    int array[] = {9, 9, 79, 2, 155, 777};
    int result = SoChanLon(array, n);

    if (result == 0)
        cout << "Khong tim thay so chan thoa man!" << endl;
    else
        cout << "So chan lon nhat nho hon moi so le: " << result << endl;

    return 0;
}

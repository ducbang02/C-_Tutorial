#include <iostream>
using namespace std;

// Bài 221: Hãy cho biết sự tương quan giữa số lượng số chẵn và số lượng số lẻ trong mảng các số nguyên (tuongquanchanle)
// Hàm này trả về một trong ba giá trị -1, 0, và 1.
// Giá trị -1 có nghĩa số lượng số chẵn nhiều hơn số lẻ.
// Giá trị 0 có nghĩa số lẻ bằng số lượng số chẵn
// Giá trị 1 có nghĩa số lẻ nhiều hơn số chẵn.

int ChanLe(int array[], int n)
{
    int demChan = 0;
    int demLe = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            demChan++;
        }
        else
        {
            demLe++;
        }
    }
    if (demChan > demChan)
    {
        return -1;
    }
    else if (demChan == demChan)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n = 6;
    int arr[n] = {2, 5, -7, 14, 15, 49};
    cout << ChanLe(arr, n);
    return 0;
}

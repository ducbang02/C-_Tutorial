#include <iostream>
#include <vector>

using namespace std;
// 283. Hãy đảo ngược thứ tự các số chẵn có trong mảng (daochan).

void DaoChan(int a[], int n)
{
    vector<int> viTriChan;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            viTriChan.push_back(a[i]);
        }
    }
    int left = 0;
    int right = viTriChan.size() - 1;
    while (left < right)
    {
        int temp = a[viTriChan[left]];
        a[viTriChan[left]] = a[viTriChan[right]];
        a[viTriChan[right]] = temp;
        left++;
        right--;
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    DaoChan(a, n);

    cout << "Mang sau khi dao nguoc chan: ";
    XuatMang(a, n);

    return 0;
}
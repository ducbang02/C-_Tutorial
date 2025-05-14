#include <iostream>

using namespace std;
// 294.Liệt kê tất cả các mảng con có độ dài lớn hơn 2 trong mảng một chiều
// các số nguyên (conlonhonhai).
void LietKeMangCon(int a[], int n)
{
    cout << "Tat ca cac mang con:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 2; j < n; j++)
        {
            cout << "{";
            for (int k = i; k <= j; k++)
            {
                cout << a[k];
                if (k < j)
                    cout << ", ";
            }
            cout << "}\n";
        }
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
    int a[] = {3, 4, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    LietKeMangCon(a, n);

    return 0;
}
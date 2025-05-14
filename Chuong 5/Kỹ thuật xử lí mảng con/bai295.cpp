#include <iostream>
using namespace std;

// bai295. Liệt kê các dãy con tăng trong mảng (lietkecontang).

void LietKeDayConTang(int a[], int n)
{
    cout << "Cac day con tang lien tiep trong mang:\n";

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            cout << "{ " << a[i];
            int j = i + 1;

            while (j < n && a[j - 1] < a[j])
            {
                cout << ", " << a[j];
                j++;
            }

            cout << " }\n";
            i = j - 1; // bỏ qua các phần tử đã xử lý
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
    int a[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    XuatMang(a, n);

    LietKeDayConTang(a, n);

    return 0;
}

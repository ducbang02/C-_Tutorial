#include <iostream>
#include <math.h>

using namespace std;

struct Node
{
    int data;
    struct Node *pRight;
    struct Node *pLeft;
};
typedef struct Node NODE;

typedef NODE *TREE;

void Init(TREE &t)
{
    t = nullptr;
}

int IsEmplty(TREE &t)
{
    if (t == nullptr)
    {
        return 1;
    }
    return 0;
}

NODE *GetNode(int x)
{
    NODE *p = new NODE;
    if (p == nullptr)
        return nullptr;
    p->data = x;
    p->pLeft = nullptr;
    p->pRight = nullptr;
    return p;
}

int InsertNode(TREE &t, int x)
{
    if (t == nullptr)
    {
        t = GetNode(x);
        return 1;
    }
    if (x < t->data)
        return InsertNode(t->pLeft, x);
    else if (x > t->data)
        return InsertNode(t->pRight, x);
    else
        return -1;
}

// LNR
// 870
void Xuat(TREE t)
{
    if (t == nullptr)
        return;

    Xuat(t->pLeft);
    cout << t->data << " ";
    Xuat(t->pRight);
}

// 871
void XuatChan(TREE t)
{
    if (t == nullptr)
        return;

    XuatChan(t->pLeft);
    if (t->data % 2 == 0)
    {
        cout << t->data << " ";
    }
    XuatChan(t->pRight);
}

// 872
void XuatDiaChiTrongKhoang(TREE t, int x, int y)
{
    if (t == nullptr)
        return;

    if (t->data > x)
    {
        XuatDiaChiTrongKhoang(t->pLeft, x, y);
    }

    if (t->data > x && t->data < y)
    {
        cout << "Dia Chi thoa man la: " << t << ", Gia tri: " << t->data << endl;
    }

    if (t->data < y)
    {
        XuatDiaChiTrongKhoang(t->pRight, x, y);
    }
}

// 874.() Viết hàm xuất tất cả các nút trên tầng thứ k của cây.
void XuatNutTangK(TREE &t, int k)
{
    if (t == nullptr)
        return;

    if (k == 0)
    {
        cout << t->data << " ";
    }
    else
    {
        XuatNutTangK(t->pLeft, k - 1);
        XuatNutTangK(t->pRight, k - 1);
    }
}

// 876. Đếm số lượng nút có đúng một con.
int DemNode1Con(TREE t)
{
    if (t == nullptr)
        return 0;
    int dem = 0;
    if ((t->pLeft != nullptr && t->pRight == nullptr) || (t->pLeft == nullptr && t->pRight != nullptr))
    {
        dem = 1;
    }
    return dem + DemNode1Con(t->pLeft) + DemNode1Con(t->pRight);
}

// 877. Đếm số lượng nút có dung 2 con.
int DemNut2Con(TREE t)
{
    if (t == nullptr)
        return 0;
    int dem = 0;
    if (t->pLeft != nullptr && t->pRight != nullptr)
    {
        dem = 1;
    }
    return dem + DemNut2Con(t->pLeft) + DemNut2Con(t->pRight);
}

// 878. Đếm số lượng nút chẵn.
int DemNutChan(TREE t)
{
    if (t == nullptr)
        return 0;
    int dem = 0;
    if (t->data % 2 == 0)
    {
        dem = 1;
    }
    return dem + DemNutChan(t->pLeft) + DemNutChan(t->pRight);
}

// 882. Đếm số lượng nút trên tầng thứ k của cây.
int DemNutTangK(TREE t, int k)
{
    if (t == nullptr)
        return 0;
    int dem = 0;
    if (k == 0)
    {
        return 1;
    }
    else
    {
        return DemNutTangK(t->pLeft, k - 1) + DemNutTangK(t->pRight, k - 1);
    }
}

// 883. Đếm số lượng nút nằm ở tầng thấp hơn tầng thứ k của cây.
int DemNutBeHonK(TREE t, int k, int level = 0)
{
    if (t == nullptr)
        return 0;
    int dem = 0;
    if (level < k)
    {
        dem++;
    }

    return dem + DemNutBeHonK(t->pLeft, k, level + 1) + DemNutBeHonK(t->pRight, k, level + 1);
}

// 884. Đếm số lượng nút nằm ở tầng cao hơn tầng thứ k của cây.
int DemNutLonHonK(TREE t, int k, int level = 0)
{
    if (t == nullptr)
        return 0;
    int dem = 0;
    if (level > k)
    {
        dem++;
    }

    return dem + DemNutBeHonK(t->pLeft, k, level + 1) + DemNutBeHonK(t->pRight, k, level + 1);
}

// 885. Tính tổng các nút trong cây.
int DemTongNut(TREE t)
{
    if (t == nullptr)
        return 0;
    int tong = 1;

    return tong + DemTongNut(t->pLeft) + DemTongNut(t->pRight);
}

// 886. Tính tổng các nút lá trong cây.
int DemNutLa(TREE t)
{
    if (t == nullptr)
        return 0;
    int dem = 0;
    if (t->pRight == nullptr && t->pLeft == nullptr)
    {
        dem = 1;
    }
    return dem + DemNutLa(t->pLeft) + DemNutLa(t->pRight);
}

// 894. Kiểm tra cây nhị phân T có phải là “cây nhị phân tìm kiếm” hay không?

// 897. Tìm giá trị lớn nhất trong cây.
int GiaTriLonNhat(TREE t)
{
    if (t == nullptr)
        return INT_MIN;

    int MaxLeft = GiaTriLonNhat(t->pLeft);
    int MaxRight = GiaTriLonNhat(t->pRight);

    return max(t->data, max(MaxLeft, MaxRight));
}

// Dem Node
int DemNode(TREE t)
{
    if (t == nullptr)
        return 0;
    int dem = 1;
    return dem + DemNode(t->pLeft) + DemNode(t->pRight);
}

void Nhap(TREE &t)
{
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    Init(t);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        InsertNode(t, x);
    }
}

void DeleteTree(TREE &t)
{
    if (t == nullptr)
        return;

    DeleteTree(t->pLeft);
    DeleteTree(t->pRight);

    delete t;
    t = nullptr;
}

int main()
{
    TREE t;
    int x = 7;
    int y = 19;
    int k = 1;
    Nhap(t);
    cout << GiaTriLonNhat(t);
    DeleteTree(t);
    return 0;
}

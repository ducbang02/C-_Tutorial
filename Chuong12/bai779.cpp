#include <iostream>

using namespace std;
// 779. Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các phân số.
struct PhanSo
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;

struct Node
{
    PHANSO data;
    struct Node *pNext;
};
typedef struct Node NODE;

struct List
{
    NODE *pHead;
    NODE *pTail;
};
typedef struct List LIST;

void Init(LIST &l)
{
    l.pHead = nullptr;
    l.pTail = nullptr;
}

int IsEmpty(LIST l)
{
    if (l.pHead == nullptr)
    {
        return 1;
    }
    return 0;
}

NODE *GetNode(PHANSO ps)
{
    NODE *p = new NODE;
    if (p == nullptr)
        return nullptr;
    p->data = ps;
    p->pNext = nullptr;
    return p;
}

void AddTail(LIST &l, NODE *p)
{
    if (l.pHead == nullptr)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void InsertAfter(NODE *pre, NODE *p)
{
    if (pre == nullptr || p == nullptr)
        return;

    p->pNext = pre->pNext;
    pre->pNext = p;
}

int Nhap(LIST &l)
{
    cout << "Nhap so phan tu: ";
    int n;
    cin >> n;
    Init(l);
    PHANSO ps;
    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap phan so thu " << i << ": ";
        cin >> ps.tu;
        cin >> ps.mau;
        NODE *p = GetNode(ps);
        if (p != nullptr)
        {
            AddTail(l, p);
        }
    }
    return 1;
}

void Xuat(LIST l)
{
    NODE *p = l.pHead;
    cout << "Cac phan tu trong list la: ";
    while (p != nullptr)
    {
        cout << p->data.tu << "/" << p->data.mau << " ";
        p = p->pNext;
    }
}

void DeleteList(LIST &l)
{
    NODE *p = l.pHead;
    while (p != nullptr)
    {
        NODE *temp = p;
        p = p->pNext;
        delete temp;
    }
    l.pHead = nullptr;
    l.pTail = nullptr;
}

int main()
{
    LIST l;
    Nhap(l);
    Xuat(l);
    DeleteList(l);

    return 0;
}
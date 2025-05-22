#include <iostream>

using namespace std;
// 787. Viết chương trình thực hiện các yêu cầu sau:
//     a. Nhập danh sách liên kết đơn các số nguyên.
//     b. Xuất danh sách liên kết đơn các số nguyên.
//     c. Tính tổng các node trong danh sách liên kết đơn.

struct Node
{
    int data;
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

NODE *GetNode(int x)
{
    NODE *p = new NODE;
    if (p == nullptr)
        return nullptr;
    p->data = x;
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
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        NODE *p = GetNode(x);
        if (p != nullptr)
        {
            AddTail(l, p);
        }
    }
    return 1;
}

int TinhTong(LIST l)
{
    int tong = 0;
    NODE *p = l.pHead;
    while (p != nullptr)
    {
        tong += p->data;
        p = p->pNext;
    }
    return tong;
}

void Xuat(LIST l)
{
    NODE *p = l.pHead;
    while (p != nullptr)
    {
        cout << p->data << " ";
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
    cout << "\ntong cua list la: " << TinhTong(l);
    DeleteList(l);

    return 0;
}
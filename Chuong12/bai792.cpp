#include <iostream>

using namespace std;
// 790. Thêm một node p vào sau node q trong danh sách?

// 791. Thêm một node p vào trước node q trong danh sách?

// 792. Lấy node đầu tiên trong danh sách ra khỏi danh sách liên kết?

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

void InsertBefore(LIST &l, NODE *p, NODE *q)
{
    if (p == nullptr || q == nullptr)
        return;

    // Trường hợp chèn trước node đầu
    if (l.pHead == q)
    {
        p->pNext = q;
        l.pHead = p;
        return;
    }

    // Tìm node đứng trước q
    NODE *current = l.pHead;
    while (current != nullptr && current->pNext != q)
    {
        current = current->pNext;
    }

    // Nếu tìm thấy node trước q
    if (current != nullptr)
    {
        p->pNext = q;
        current->pNext = p;
    }
}

void DeleteHead(LIST &l)
{
    if (l.pHead == nullptr)
        return;

    NODE *p = l.pHead;
    l.pHead = p->pNext;

    if (l.pHead == nullptr)
    {
        l.pTail == nullptr;
    }

    delete p;
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
    NODE *p = GetNode(15);
    InsertBefore(l, p, l.pHead->pNext);
    Xuat(l);

    DeleteList(l);

    return 0;
}
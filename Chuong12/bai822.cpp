#include <bits/stdc++.h>
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

// 815
void PhanSoDuongDau(LIST l)
{
    NODE *p = l.pHead;
    while (p != nullptr)
    {
        if (p->data.mau != 0 && p->data.mau * p->data.tu > 0)
        {
            cout << "PS duong dau tien: " << p->data.tu << "/" << p->data.mau;
            break;
        }
        p = p->pNext;
    }
    cout << "ko co phan tu duong dau";
}

// 816
void PhanSoDuongCuoi(LIST l)
{
    NODE *p = l.pHead;
    NODE *ps = nullptr;
    while (p != nullptr)
    {
        if (p->data.mau != 0 && p->data.mau * p->data.tu > 0)
        {
            ps = p;
        }
        p = p->pNext;
    }

    if (ps == nullptr)
    {
        cout << "khong co phan so duong";
    }
    else
    {
        cout << "phan so duong cuoi cung la: " << ps->data.tu << "/" << ps->data.mau;
    }
}

// 817
bool KTPhanSoToanDuong(LIST l)
{
    NODE *p = l.pHead;

    while (p != nullptr)
    {
        if (p->data.mau == 0 || p->data.mau * p->data.tu < 0)
        {
            return false;
        }
        p = p->pNext;
    }
    return true;
}

// 819
PHANSO PhanSoLonNhat(LIST l)
{
    NODE *p = l.pHead;
    NODE *max = l.pHead;
    while (p != nullptr)
    {
        if (((float)max->data.tu / max->data.mau) < ((float)p->data.tu / p->data.mau))
        {
            max = p;
        }
        p = p->pNext;
    }
    PHANSO ps = max->data;
    return ps;
}

// 821
void SapXepTangDan(LIST &l)
{
    for (NODE *p = l.pHead; p != nullptr; p = p->pNext)
    {
        for (NODE *q = p; q != nullptr; q = q->pNext)
        {
            float psp = (float)p->data.tu / p->data.mau;
            float psq = (float)q->data.tu / q->data.mau;
            if (psq < psp)
            {
                swap(q->data, p->data);
            }
        }
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
    SapXepTangDan(l);
    Xuat(l);
    DeleteList(l);

    return 0;
}
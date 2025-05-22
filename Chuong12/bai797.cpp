#include <iostream>

using namespace std;

// 797. Hãy khai báo cấu trúc dữ liệu cho danh sách liên kết đơn các thí sinh.
// Giả sử thí sinh gồm những thành phần thông tin như sau:

// Mã thí sinh: tối đa 5 ký tự.

// Họ tên: tối đa 30 ký tự.

// Điểm toán: kiểu số thực.

// Điểm lý: kiểu số thực.

// Điểm hóa: kiểu số thực.

// Điểm trung bình: kiểu số thực.

struct HocSinh
{
    char maTS[6];
    char hoTen[31];
    float toan, li, hoa, diemTB;
};
typedef struct HocSinh HOCSINH;

struct Node
{
    HOCSINH data;
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

NODE *GetNode(HOCSINH hs)
{
    NODE *p = new NODE;
    if (p == nullptr)
        return nullptr;
    p->data = hs;
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

int Nhap(LIST &l)
{
    cout << "Nhap so phan tu: ";
    int n;
    cin >> n;
    Init(l);
    HOCSINH hs;
    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap lan luot mats, ho ten, diem toan, diem li, diem hoa cua ts thu " << i << " ";
        cin >> hs.maTS >> hs.hoTen >> hs.toan >> hs.li >> hs.hoa;
        hs.diemTB = (hs.toan + hs.li + hs.hoa) / 3;
        NODE *p = GetNode(hs);
        if (p != nullptr)
            AddTail(l, p);
    }
    return 1;
}

void Xuat(LIST l)
{
    NODE *p = l.pHead;
    while (p != nullptr)
    {
        string maTS = p->data.maTS;
        string hoTen = p->data.hoTen;
        float toan = p->data.toan;
        float li = p->data.li;
        float hoa = p->data.hoa;
        float diemTB = p->data.diemTB;

        cout << maTS << ", " << hoTen << ", " << toan << ", " << li << ", " << hoa << ", " << diemTB << "\n";
        p = p->pNext;
    }
}

void DeleteList(LIST &l)
{
    NODE *current = l.pHead;
    while (current != nullptr)
    {
        NODE *temp = current;
        current = current->pNext;
        delete temp;
    }
    l.pHead = l.pTail = nullptr;
}

int main()
{
    LIST l;
    Nhap(l);
    Xuat(l);
    DeleteList(l);
    return 0;
}
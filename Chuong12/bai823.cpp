#include <iostream>
#include <cstring>

using namespace std;

struct Date
{
    int ngay, thang, nam;
};

struct NhanVien
{
    char hoTen[31];
    Date ngaySinh;
    float luong;
    int gioiTinh; // 0: Nữ, 1: Nam
};

struct Node
{
    NhanVien data;
    Node *next;
};

struct List
{
    Node *head;
    Node *tail;
};

void Init(List &l)
{
    l.head = l.tail = nullptr;
}

Node *GetNode(NhanVien nv)
{
    Node *p = new Node;
    if (!p)
        return nullptr;
    p->data = nv;
    p->next = nullptr;
    return p;
}

void AddTail(List &l, Node *p)
{
    if (!l.head)
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next = p;
        l.tail = p;
    }
}

void NhapNV(NhanVien &nv)
{
    cout << "Nhap ho ten: ";
    cin.ignore();
    cin.getline(nv.hoTen, 31);
    cout << "Nhap ngay sinh (ngay thang nam): ";
    cin >> nv.ngaySinh.ngay >> nv.ngaySinh.thang >> nv.ngaySinh.nam;
    cout << "Nhap luong: ";
    cin >> nv.luong;
    cout << "Nhap gioi tinh (0: Nu, 1: Nam): ";
    cin >> nv.gioiTinh;
}

void NhapDanhSach(List &l, int n)
{
    Init(l);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap nhan vien thu " << i + 1 << ":\n";
        NhanVien nv;
        NhapNV(nv);
        Node *p = GetNode(nv);
        AddTail(l, p);
    }
}

void XuatNV(const NhanVien &nv)
{
    cout << nv.hoTen << " - ";
    cout << nv.ngaySinh.ngay << "/" << nv.ngaySinh.thang << "/" << nv.ngaySinh.nam << " - ";
    cout << nv.luong << " - ";
    cout << (nv.gioiTinh == 1 ? "Nam" : "Nu") << endl;
}

void XuatDanhSach(const List &l)
{
    Node *p = l.head;
    while (p)
    {
        XuatNV(p->data);
        p = p->next;
    }
}

void LietKeTren40Tuoi(const List &l, int namHienTai = 2025)
{
    cout << "\nNhan vien tren 40 tuoi:\n";
    Node *p = l.head;
    while (p)
    {
        if (namHienTai - p->data.ngaySinh.nam > 40)
        {
            XuatNV(p->data);
        }
        p = p->next;
    }
}

int DemLuongLonHon1tr(const List &l)
{
    int dem = 0;
    Node *p = l.head;
    while (p)
    {
        if (p->data.luong > 1000000)
            dem++;
        p = p->next;
    }
    return dem;
}

void SapXepGiamNamSinh(List &l)
{
    for (Node *p = l.head; p && p->next; p = p->next)
    {
        for (Node *q = p->next; q; q = q->next)
        {
            if (p->data.ngaySinh.nam < q->data.ngaySinh.nam)
            {
                swap(p->data, q->data);
            }
        }
    }
}

int main()
{
    List ds;
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    NhapDanhSach(ds, n);

    cout << "\nDanh sach nhan vien:\n";
    XuatDanhSach(ds);

    LietKeTren40Tuoi(ds);

    cout << "\nSo nhan vien luong > 1.000.000: " << DemLuongLonHon1tr(ds) << endl;

    cout << "\nDanh sach sau khi sap xep giam dan theo nam sinh:\n";
    SapXepGiamNamSinh(ds);
    XuatDanhSach(ds);

    return 0;
}

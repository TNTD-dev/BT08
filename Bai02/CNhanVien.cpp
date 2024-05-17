#include "CNhanVien.h"

void CNhanVien::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, HoTen);
	cout << "Nhap ngay sinh: ";
	getline(cin, NgaySinh);
	cout << "Nhap luong co ban: ";
	cin >> LuongCoBan;
	cin.ignore();
}

void CNhanVien::Xuat()
{
	cout << "Ho ten nhan vien: " << HoTen << endl;
	cout << "Ngay Sinh nhan vien: " << NgaySinh << endl;
	cout << "Luong co ban cua nhan vien: " << LuongCoBan << endl;
}

double CNhanVien::TinhLuong()
{
	return 0.0;
}

CNhanVien* CNhanVien::TimKiem(string)
{
	return nullptr;
}


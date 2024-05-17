#include "CNhanVienQuanLi.h"


void CNhanVienQuanLi::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap he so chuc vu: ";
	cin >> HeSo;
	cout << "Nhap tien thuong: ";
	cin >> Thuong;
}

void CNhanVienQuanLi::Xuat()
{
	CNhanVien::Xuat();
	cout << "He so chuc vu: " << HeSo << endl;
	cout << "Tien thuong: " << Thuong << endl;
	cout << "Tien luong: " << TinhLuong() << endl;
}

double CNhanVienQuanLi::TinhLuong()
{
	return LuongCoBan*HeSo+Thuong;
}

CNhanVien* CNhanVienQuanLi::TimKiem(string _HoTen)
{
	if (HoTen.compare(_HoTen) == 0) return this;
	return nullptr;
}



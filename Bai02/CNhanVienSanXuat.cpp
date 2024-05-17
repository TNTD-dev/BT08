#include "CNhanVienSanXuat.h"

void CNhanVienSanXuat::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
}

void CNhanVienSanXuat::Xuat()
{
	CNhanVien::Xuat();
	cout << "So san pham san xuat: " << SoSanPham << endl;
	cout << "Tien luong: " << TinhLuong() << endl;

}

double CNhanVienSanXuat::TinhLuong()
{
	return LuongCoBan+SoSanPham*2000;
}

CNhanVien* CNhanVienSanXuat::TimKiem(string _HoTen)
{
	if (HoTen.compare(_HoTen) == 0) return this;
	return nullptr;
}


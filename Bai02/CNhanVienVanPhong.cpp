#include "CNhanVienVanPhong.h"

void CNhanVienVanPhong::Nhap()
{
	CNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> SoNgayLam;
	cout << "Nhap tien tro cap: ";
	cin >> TroCap;
}

void CNhanVienVanPhong::Xuat()
{
	CNhanVien::Xuat();
	cout << "So ngay lam viec: " << SoNgayLam << endl;
	cout << "Tien tro cap: " << TroCap << endl;
	cout << "Tien luong: " << fixed << setprecision(2) << TinhLuong() << endl;

}

double CNhanVienVanPhong::TinhLuong()
{
	return LuongCoBan+SoNgayLam*100000+TroCap;
}

CNhanVien* CNhanVienVanPhong::TimKiem(string _HoTen)
{
	if (HoTen.compare(_HoTen) == 0) return this;
	return nullptr;
}


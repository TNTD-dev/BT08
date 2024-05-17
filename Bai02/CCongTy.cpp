#include "CCongTy.h"
#include"CNhanVien.h"
#include"CNhanVienQuanLi.h"
#include"CNhanVienSanXuat.h"
#include"CNhanVienVanPhong.h"
void CCongTy::Nhap()
{
	cout << "Nhap so luong nhan vien: ";
	cin >> SoLuongNhanVien;
	for (int i = 0; i < SoLuongNhanVien; i++) {
		cout << "Nhap nhan vien thu " << i + 1 << ":\n";
		cout << "Nhap bo phan nhan vien (0.Nhan vien van phong, 1.Nha vien san xuat, 2.Nhan vien quan li): ";
		int loai;
		cin >> loai;
		if (loai == 0) DanhSach[i] = new CNhanVienVanPhong;
		else if (loai == 1) DanhSach[i] = new CNhanVienSanXuat;
		else DanhSach[i] = new CNhanVienQuanLi;
		DanhSach[i]->Nhap();
		
	}
}

void CCongTy::Xuat()
{
	cout << "So luong nhan vien cua cong ty: " << SoLuongNhanVien << endl;
	cout << "Danh sach cac nhan vien:\n";
	for (int i = 0; i < SoLuongNhanVien; i++) {
		DanhSach[i]->Xuat();
	}
}

double CCongTy::TinhLuong()
{
	double luong = 0;
	for (int i = 0; i < SoLuongNhanVien; i++) {
		luong += DanhSach[i]->TinhLuong();
	}
	return luong;
}

CNhanVien* CCongTy::TimKiem(string _HoTen)
{
	for (int i = 0; i < SoLuongNhanVien; i++) {
		CNhanVien* ht;
		ht = DanhSach[i]->TimKiem(_HoTen);
			if (ht != nullptr) return ht;
	}
	return nullptr;
}


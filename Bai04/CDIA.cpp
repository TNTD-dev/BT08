#include "CDIA.h"
#include"CTapTin.h"
#include"CThuMuc.h"
void CDIA::Nhap()
{
	cout << "-Nhap so luong doi tuong luu tru: ";
	cin >> SoLuongLuuTru;
	for (int i = 0; i < SoLuongLuuTru; i++) {
		cout << "-Nhap doi tuong thu " << i + 1 << ":\n";
		cout << "-Nhap the loai (0.Thu muc, 1.Tap tin): ";
		int loai;
		cin >> loai;
		if (loai == 0) DanhSachODia[i] = new CThuMuc;
		else DanhSachODia[i] = new CTapTin;
		DanhSachODia[i]->Nhap();
	}
}

void CDIA::Xuat()
{
	cout << "-So luong doi tuong luu tru: " << SoLuongLuuTru << endl;
	cout << "-Danh sach doi tuong trong o dia:\n";
	for (int i = 0; i < SoLuongLuuTru; i++) {
		cout << "Doi tuong luu tru thu " << i + 1 << ":\n";
		DanhSachODia[i]->Xuat();
	}
}

double CDIA::TinhDungLuong()
{
	double tong = 0;
	for (int i = 0; i < SoLuongLuuTru; i++) {
		tong += DanhSachODia[i]->TinhDungLuong();
	}
	return tong;
}

int CDIA::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < SoLuongLuuTru; i++) {
		dem += DanhSachODia[i]->DemTapTin();
	}
	return dem;
}

int CDIA::DemThuMuc()
{
	int dem = 0;
	for (int i = 0; i < SoLuongLuuTru; i++) {
		dem += DanhSachODia[i]->DemThuMuc();
	}
	return dem;
}

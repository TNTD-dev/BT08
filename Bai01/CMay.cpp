#include "CMay.h"
#include"CChiTietDon.h"
#include"CChiTietPhuc.h"
void CMay::Nhap()
{
	cout << "-Nhap so luong chi tiet thanh phan cua may: ";
	cin >> SoLuongChiTiet;
	for (int i = 0; i < SoLuongChiTiet; i++) {
		cout << "-Nhap chi tiet thanh phan thu "<< i + 1 <<": \n";
		cout << "-Nhap loai chi tiet (0.Chi tiet don, 1.Chi tiet phuc): ";
		int loai;
		cin >> loai;
		if (loai == 0) DanhSachChiTiet[i] = new CChiTietDon;
		else DanhSachChiTiet[i] = new CChiTietPhuc;
		DanhSachChiTiet[i]->Nhap();
	}
}

void CMay::Xuat()
{
	cout << "-Danh sach cac chi tiet thanh phan cua may: \n";
	for (int i = 0; i < SoLuongChiTiet; i++) {
		DanhSachChiTiet[i]->Xuat();
	}
}

double CMay::TinhTien()
{
	double tong = 0;
	for (int i = 0; i < SoLuongChiTiet; i++) {
		tong += DanhSachChiTiet[i]->TinhTien();
	}
	return tong;
}

CChiTiet* CMay::TimKiem(string _MaSo)
{
	for (int i = 0; i < SoLuongChiTiet; i++) {
		CChiTiet* ms = DanhSachChiTiet[i]->TimKiem(_MaSo);
		if (ms != NULL) return ms;
	}
	return NULL;
}
int CMay::DemChiTietDon()
{
	int dem = 0;
	for (int i = 0; i < SoLuongChiTiet; i++) {
		dem += DanhSachChiTiet[i]->DemChiTietDon();
	}
	return dem;
	return 0;
}

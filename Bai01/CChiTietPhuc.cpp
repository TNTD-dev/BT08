#include "CChiTietPhuc.h"
#include"CChiTietDon.h"
void CChiTietPhuc::Nhap()
{
	cout << "Nhap ma so cua chi tiet: ";
	cin >> MaSo;
	cout << "Nhap so luong chi tiet thanh phan: ";
	cin >> SoLuong;
	for (int i = 0; i < SoLuong; i++) {
		cout << "Nhap chi tiet thanh phan thu " << i + 1<<": \n";
		cout << "Nhap loai chi tiet (0.Chi tiet don, 1.Chi tiet phuc): ";
		int loai;
		cin >> loai;
		if (loai == 0) DanhSach[i] = new CChiTietDon;
		else DanhSach[i] = new CChiTietPhuc;
		DanhSach[i]->Nhap();
	}
}

void CChiTietPhuc::Xuat()
{
	cout << "Ma so cua chi tiet la: " << MaSo << endl;
	cout << "Danh sach cac chi tiet thanh phan cua chi tiet phuc: " << endl;
	for (int i = 0; i < SoLuong; i++) {
		DanhSach[i]->Xuat();
	}
}
double CChiTietPhuc::TinhTien()
{
	double tong = 0;
	for (int i = 0; i < SoLuong; i++) {
		tong += DanhSach[i]->TinhTien();
	}
	return tong;
}

CChiTiet* CChiTietPhuc::TimKiem(string _MaSo)
{
	if (MaSo.compare(_MaSo) == 0) return this;
	for (int i = 0; i < SoLuong; i++) {
		CChiTiet*ms= DanhSach[i]->TimKiem(_MaSo);
		if (ms != NULL) return ms;
	}
	return NULL;
}

int CChiTietPhuc::DemChiTietDon()
{
	int dem = 0;
	for (int i = 0; i < SoLuong; i++) {
		dem += DanhSach[i]->DemChiTietDon();
	}
	return dem;
}

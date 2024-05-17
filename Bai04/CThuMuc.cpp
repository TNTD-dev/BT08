#include "CThuMuc.h"
#include"CTapTin.h"
void CThuMuc::Nhap()
{
	cout << "Nhap ten thu muc: ";
	cin >> Ten;
	cout << "Nhap ngay thang tao lap: ";
	cin >> NgayThang;
	cout << "Nhap so luong thanh phan trong thu muc: ";
	cin >> SoLuong;
	for (int i = 0; i < SoLuong; i++) {
		cout << "Nhap thanh phan thu " << i + 1 << " trong thu muc:\n";
		cout << "Nhap the loai (0.Thu muc, 1.Tap tin): ";
		int loai;
		cin >> loai;
		if (loai == 0) DanhSach[i] = new CThuMuc;
		else DanhSach[i] = new CTapTin;
		DanhSach[i]->Nhap();
	}
}
void CThuMuc::Xuat()
{
	cout << "Ten thu muc: " << Ten << endl;
	cout << "Ngay thang tao thu muc: " << NgayThang << endl;
	cout << "So luong thanh phan trong thu muc: " << SoLuong << endl;
	cout << "Danh sach thanh phan trong thu muc:\n";
	for (int i = 0; i < SoLuong; i++) {
		DanhSach[i]->Xuat();
	}
}
double CThuMuc::TinhDungLuong()
{
	double tong = 0;
	for (int i = 0; i < SoLuong; i++) {
		tong += DanhSach[i]->TinhDungLuong();
	}
	return tong;
}
int CThuMuc::DemTapTin()
{
	int dem = 0;
	for (int i = 0; i < SoLuong; i++) {
		dem += DanhSach[i]->DemTapTin();
	}
	return dem;
}
int CThuMuc::DemThuMuc()
{
	int dem = 1;
	for (int i = 0; i < SoLuong; i++) {
		dem += DanhSach[i]->DemThuMuc();
	}
	return dem;
}
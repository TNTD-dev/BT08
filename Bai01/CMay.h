#pragma once
#include"CChiTiet.h"
class CMay
{
private:
	int SoLuongChiTiet;
	CChiTiet* DanhSachChiTiet[MAX];
public:
	void Nhap();
	void Xuat();
	double TinhTien();
	CChiTiet* TimKiem(string);
	int DemChiTietDon();

};


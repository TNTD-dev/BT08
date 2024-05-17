#pragma once
#include"CChiTiet.h"
class CChiTietPhuc:public CChiTiet 
{
private:
	int SoLuong;
	CChiTiet* DanhSach[MAX];
public:
	void Xuat();
	void Nhap();
	double TinhTien();
	CChiTiet* TimKiem(string);
	int DemChiTietDon();


};


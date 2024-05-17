#pragma once
#include"CLuuTru.h"
class CDIA
{
private:
	int SoLuongLuuTru;
	CLuuTru* DanhSachODia[MAX];
public:
	void Nhap();
	void Xuat();
	double TinhDungLuong();
	int DemTapTin();
	int DemThuMuc();
};


#pragma once
#include"CLuuTru.h"
class CThuMuc:public CLuuTru
{
private:
	int SoLuong;
	CLuuTru* DanhSach[MAX];
public:
	void Nhap();
	void Xuat();
	double TinhDungLuong();
	int DemTapTin();
	int DemThuMuc();
};


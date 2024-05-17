#pragma once
#include"CDienTro.h"
class CMachDien
{
private:
	int SoLuong;
	CDienTro* DanhSach[MAX];
public:
	void Nhap();
	void Xuat();
	double TinhDienTro();



};


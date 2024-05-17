#pragma once
#include"CNhanVien.h"
class CNhanVienVanPhong:public CNhanVien
{
private:
	int SoNgayLam;
	double TroCap;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	CNhanVien* TimKiem(string);
};



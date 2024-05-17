#pragma once
#include"CNhanVien.h"
class CNhanVienSanXuat:public CNhanVien
{
private:
	int SoSanPham;
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	CNhanVien* TimKiem(string);
	
};


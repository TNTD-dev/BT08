#pragma once
#include"CNhanVien.h"
class CNhanVienQuanLi:public CNhanVien
{
private:
	double HeSo;
	double Thuong;
public:
	 void Nhap();
	 void Xuat();
	 double TinhLuong();
	 CNhanVien* TimKiem(string);
	
};


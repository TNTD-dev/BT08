#pragma once
#include"CNhanVien.h"
class CCongTy
{
private:

	int SoLuongNhanVien;
	CNhanVien* DanhSach[MAX];
public:
	void Nhap();
	void Xuat();
	double TinhLuong();
	CNhanVien* TimKiem(string);
  
};


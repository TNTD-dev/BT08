#pragma once
#include"CDienTro.h"
class CMachDienSongSong:public CDienTro
{
private:
	int SoluongDienTro;
	pair<string, double> DanhSachDienTro[MAX];

public:
	 void Nhap();
	 void Xuat();
	 double TinhDienTro();
};


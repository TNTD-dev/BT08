#include "CChiTietDon.h"

void CChiTietDon::Nhap()
{
	cout << "Nhap ma so cua chi tiet: ";
	cin >> MaSo;
	cout << "Nhap gia tien cua chi tiet: ";
	cin >> GiaTien;

}

void CChiTietDon::Xuat()
{
	cout << "Ma so cua chi tiet la: " << MaSo<<endl;
	cout << "Gia tien cua chi tiet la: " << GiaTien<<endl;
}

double CChiTietDon::TinhTien()
{

	return GiaTien;
}

CChiTiet* CChiTietDon::TimKiem(string _MaSo)
{
	if (MaSo.compare(_MaSo) == 0) return this;
	return NULL;
}

int CChiTietDon::DemChiTietDon()
{
	return 1;
}
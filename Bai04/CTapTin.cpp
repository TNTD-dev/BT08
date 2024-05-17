#include "CTapTin.h"

void CTapTin::Nhap()
{
	cout << "Nhap ten tap tin: ";
	cin >> Ten;
	cout << "Nhap ngay thang tao lap: ";
	cin >> NgayThang;
	cout << "Nhap dung luong tap tin: ";
	cin >> DungLuong;
}
void CTapTin::Xuat()
{
	cout << "Ten tap tin: " << Ten << endl;
	cout << "Ngay thang tao lap: " << NgayThang << endl;
	cout << "Dung luong tap tin: " << DungLuong << endl;
}
double CTapTin::TinhDungLuong()
{
	return DungLuong;
}
int CTapTin::DemTapTin()
{
	return 1;
}
int CTapTin::DemThuMuc()
{
	return 0;
}
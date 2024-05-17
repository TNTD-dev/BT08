#include "CMachDienNoiTiep.h"

void CMachDienNoiTiep::Nhap()
{
	cout << "Nhap so luong dien tro mach noi tiep: ";
	cin >> SoluongDienTro;
	for (int i = 0; i < SoluongDienTro; i++) {
		cout << "Nhap gia tri R" << i + 1 << ":\n";
			CDienTro::Nhap();
			DanhSachDienTro[i].first = MaSo;
			DanhSachDienTro[i].second = DoLon;

	}
}

void CMachDienNoiTiep::Xuat()
{
	cout << "Danh sach cac dien tro mach noi tiep:\n";
	for (int i = 0; i < SoluongDienTro; i++) {
		cout << "Dien tro R" << i + 1 << ":\n";
		cout << "Ma so dien tro: " << DanhSachDienTro[i].first << endl;
		cout << "Do lon dien tro: " << DanhSachDienTro[i].second << endl;

	}
	cout << "Dien tro tuong duong: " << TinhDienTro()<<endl;
}

double CMachDienNoiTiep::TinhDienTro()
{
	double tong = 0;
	for (int i = 0; i < SoluongDienTro; i++) {
		tong+= DanhSachDienTro[i].second;
	}
	return tong;
}

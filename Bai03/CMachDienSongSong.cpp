#include "CMachDienSongSong.h"

void CMachDienSongSong::Nhap()
{
	cout << "Nhap so luong dien tro mach song song: ";
	cin >> SoluongDienTro;
	for (int i = 0; i < SoluongDienTro; i++) {
		cout << "Nhap gia tri R" << i + 1 << ":\n";
		CDienTro::Nhap();
		DanhSachDienTro[i].first = MaSo;
		DanhSachDienTro[i].second = DoLon;

	}
}

void CMachDienSongSong::Xuat()
{
	cout << "Danh sach cac dien tro mach song song:\n";
	for (int i = 0; i < SoluongDienTro; i++) {
		cout << "Dien tro R" << i + 1 << ":\n";
		cout << "Ma so dien tro: " << DanhSachDienTro[i].first << endl;
		cout << "Do lon dien tro: " << DanhSachDienTro[i].second << endl;
	}
	cout << "Dien tro tuong duong: " << TinhDienTro() << endl;

}

double CMachDienSongSong::TinhDienTro()
{
	double tong = 0;
	for (int i = 0; i < SoluongDienTro; i++) {
		tong += 1/ DanhSachDienTro[i].second;
	}
	return 1/tong;
}

#include<iostream>
#include"CDIA.h"
using namespace std;

int main() {
	CDIA data;
	data.Nhap();
	data.Xuat();
	cout << "Tong dung luong cua o dia: " << data.TinhDungLuong() << endl;
	cout << "So luong tap tin trong o dia: " << data.DemTapTin() << endl;
	cout << "So luong thu muc trong o dia: " << data.DemTapTin() << endl;
	return 0;
}

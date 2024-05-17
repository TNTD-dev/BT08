#include<iostream>
#include"CMay.h"
#include"CChiTiet.h"
using namespace std;

int main() {

	CMay machine;
	machine.Nhap();
	machine.Xuat();
	cout << "\nTong tien cac chi tiet cua may la: " << machine.TinhTien()<<endl;
	cout << "Nhap ma so chi tiet can tim kiem: ";
	string ms;
	cin >> ms;
	CChiTiet* detail;
	detail = machine.TimKiem(ms);
	if (detail != NULL) {
		cout << "Tim thay!!!\n";
		detail->Xuat();
	}
	else cout << "Khong tim thay!!!\n";
	cout << "So luong chi tiet don co trong may la: " << machine.DemChiTietDon() << endl;
	return 0;
}
#include<iostream>
#include"CCongTy.h"
#include"CNhanVien.h"

using namespace std;

int main() {
	CCongTy company;
	company.Nhap();
	company.Xuat();
	cout << "Tong luong cua cong ty: " << fixed << setprecision(2) << company.TinhLuong() << endl;
	cout << "Nhap ho ten nhan vien can tim kiem: ";
	string ht;
	cin >> ht;
	CNhanVien* hoten = company.TimKiem(ht);
	if (hoten != NULL) {
		cout << "Tim Thay!!!\n";
		hoten->Xuat();
	}
	else cout << "Khong Tim Thay!!!\n";

	return 0;
}


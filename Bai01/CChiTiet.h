#pragma once
#include<iostream>
using namespace std;
#define MAX 100
class CChiTiet
{ 
protected:
	string MaSo;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhTien();
	virtual CChiTiet* TimKiem(string);
	virtual int DemChiTietDon();

};


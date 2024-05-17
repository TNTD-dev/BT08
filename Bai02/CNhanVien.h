#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
#define MAX 1000
class CNhanVien
{
protected:
	string HoTen;
	string NgaySinh;
	double LuongCoBan;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhLuong();
	virtual CNhanVien* TimKiem(string);
	
};


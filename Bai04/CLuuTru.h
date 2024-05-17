#pragma once
#include<iostream>
using namespace std;
#define MAX 1000
class CLuuTru
{
protected:
	string Ten;
	string NgayThang;
	double DungLuong;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhDungLuong();
	virtual int DemTapTin();
	virtual int DemThuMuc();
};


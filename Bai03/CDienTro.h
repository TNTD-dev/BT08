#pragma once
#include<iostream>
#include<map>
using namespace std;
#define MAX 1000

class CDienTro
{
protected:
	string MaSo;
	double DoLon;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual double TinhDienTro();

};


#pragma once
#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
protected:
	string MSSV;
	string hoTen;
	string diaChi;
	int tongTinChi;
	float diemTB;
public:
	SinhVien();
	~SinhVien();
	virtual void nhap();
	virtual void xuat();
	virtual bool totNghiep();
	friend class QuanLiSinhVien;
};


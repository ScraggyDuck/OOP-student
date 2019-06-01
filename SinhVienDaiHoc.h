#pragma once
#include "SinhVien.h"

class SinhVienDaiHoc : public SinhVien
{
private:
	string tenLuanVan;
	float diemLuanVan;
public:
	SinhVienDaiHoc();
	~SinhVienDaiHoc();
	void nhap();
	void xuat();
	bool totNghiep();
};


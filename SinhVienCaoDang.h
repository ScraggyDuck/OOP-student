#pragma once
#include "SinhVien.h"

class SinhVienCaoDang : public SinhVien
{
private:
	float  diemThiTotNghiep;
public:
	SinhVienCaoDang();
	~SinhVienCaoDang();
	void nhap();
	void xuat();
	bool totNghiep();
};


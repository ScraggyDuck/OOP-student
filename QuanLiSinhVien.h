#pragma once
#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"
#include "SinhVien.h"
#include <vector>

class QuanLiSinhVien
{
private:
	vector<SinhVien*> list;
public:
	QuanLiSinhVien();
	~QuanLiSinhVien();
	void menu();
	void nhap();
	void xuat();
	int	demSVTotNghiep();
	void diemTBMax();
};


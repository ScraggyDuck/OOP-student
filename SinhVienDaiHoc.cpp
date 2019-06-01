#include "SinhVienDaiHoc.h"



SinhVienDaiHoc::SinhVienDaiHoc()
{
}


SinhVienDaiHoc::~SinhVienDaiHoc()
{
}

void SinhVienDaiHoc::nhap()
{
	SinhVien::nhap();
	cin.ignore();
	cout << "Nhap ten luan van: ";
	getline(cin, tenLuanVan);
	cout << "Nhap diem luan van: ";
	cin >> diemLuanVan;
}

void SinhVienDaiHoc::xuat()
{
	cout << "Sinh vien he dai hoc!" << endl;
	SinhVien::xuat();
	cout << "Ten luan van: " << tenLuanVan << endl;
	cout << "Diem luan van: " << diemLuanVan << endl;
}

bool SinhVienDaiHoc::totNghiep()
{
	if (tongTinChi < 170 || diemTB < 5 || diemLuanVan < 5)
		return false;
	return true;
}

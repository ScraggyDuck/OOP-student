#include "SinhVienCaoDang.h"



SinhVienCaoDang::SinhVienCaoDang()
{
}


SinhVienCaoDang::~SinhVienCaoDang()
{
}

void SinhVienCaoDang::nhap()
{
	SinhVien::nhap();
	cout << "Nhap diem thi tot nghiep: ";
	cin >> diemThiTotNghiep;
}

void SinhVienCaoDang::xuat()
{
	cout << "Sinh vien he cao dang!" << endl;
	SinhVien::xuat();
	cout << "Diem thi tot nghiep: " << diemThiTotNghiep << endl;
}

bool SinhVienCaoDang::totNghiep()
{
	if(tongTinChi < 120 || diemTB < 5 || diemThiTotNghiep < 5)
		return false;
	return true;
}

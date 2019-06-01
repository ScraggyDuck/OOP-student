#include "SinhVien.h"



SinhVien::SinhVien()
{
}


SinhVien::~SinhVien()
{
}

void SinhVien::nhap()
{
	fflush(stdin);
	cin.ignore();
	cout << "Nhap ho va ten sinh vien: ";
	getline(cin, hoTen);
	cout << "Nhap ma so sinh vien: ";
	getline(cin, MSSV);
	cout << "Nhap dia chi: ";
	getline(cin, diaChi);
	cout << "Nhap so tin chi cua sinh vien: ";
	cin >> tongTinChi;
	cout << "Nhap diem trung binh: ";
	cin >> diemTB;
}

void SinhVien::xuat()
{
	cout << "Ho va ten: " << hoTen << endl;
	cout << "Ma so sinh vien: " << MSSV << endl;
	cout << "Dia chi: " << diaChi << endl;
	cout << "Tong so tin chi: " << tongTinChi << " tin chi." << endl;
	cout << "Diem trung binh: " << diemTB << endl;
}

bool SinhVien::totNghiep()
{
	return false;
}

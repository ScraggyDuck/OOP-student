#include "QuanLiSinhVien.h"



QuanLiSinhVien::QuanLiSinhVien()
{
}


QuanLiSinhVien::~QuanLiSinhVien()
{
}

void QuanLiSinhVien::menu()
{
	int lc;
	do {
		system("cls");
		cout << "===============================================\n";
		cout << "===============QUAN LI SINH VIEN===============\n";
		cout << "\n1. Nhap thong tin sinh vien";
		cout << "\n2. Xuat thong tin sinh vien";
		cout << "\n0. Ket thuc!";
		cout << "\n===============================================\n\n";
		cout << "\nNhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 0:
			break;
		case 1:
			nhap();
			break;
		case 2:
			xuat();
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			break;
		}
	} while (lc != 0);
}


void QuanLiSinhVien::nhap()
{
	SinhVien* SV;
	int lc;
	do {
		system("cls");
		cout << "===============================================\n";
		cout << "===============QUAN LI SINH VIEN===============\n";
		cout << "\n1. Nhap sinh vien cao dang";
		cout << "\n2. Nhap sinh vien dai hoc";
		cout << "\n0. Ket thuc!";
		cout << "\n===============================================\n\n";
		cout << "\nNhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 0:
			break;
		case 1:
			SV = new SinhVienCaoDang;
			SV->nhap();
			list.push_back(SV);
			break;
		case 2:
			SV = new SinhVienDaiHoc;
			SV->nhap();
			list.push_back(SV);
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			system("pause");
			break;
		}

	} while (lc != 0);
}

int QuanLiSinhVien::demSVTotNghiep()
{
	int count = 0;
	int n = list.size();
	for (int i = 0; i < n; i++)
		if (list[i]->totNghiep() == true)
			count++;
	return count;
}

void QuanLiSinhVien::diemTBMax()
{
	int mark = 0;
	float max = list[0]->diemTB;
	int n = list.size();
	for (int i = 1; i < n; i++)
		if (list[i]->diemTB > max) {
			mark = i;
			max = list[i]->diemTB;
		}
	list[mark]->xuat();
}

void QuanLiSinhVien::xuat()
{
	int lc;
	int n = list.size();
	do {
		system("cls");
		cout << "===============================================\n";
		cout << "===============QUAN LI SINH VIEN===============\n";
		cout << "\n1. Xuat danh sach sinh vien";
		cout << "\n2. Tong so luong sinh vien tot nghiep";
		cout << "\n3. Sinh vien co diem trung binh cao nhat";
		cout << "\n0. Ket thuc!";
		cout << "\n===============================================\n\n";
		cout << "\nNhap lua chon: ";
		cin >> lc;
		switch (lc)
		{
		case 0:
			break;
		case 1:
			cout << "\n=======THONG TIN DANH SACH SINH VIEN!!!========\n\n";
			cout << "\nTong so sinh vien : " << n << " sinh vien.\n\n";
			for (int i = 0; i < n; i++) {
				cout << "\n===============================================\n";
				cout << "\nSinh vien vien thu " << i + 1 << endl;
				list[i]->xuat();
				cout << "\n===============================================\n";
			}
			break;
		case 2:
			cout << "\n===============================================\n";
			cout << "\nTong so luong sinh vien tot nghiep: " << demSVTotNghiep() << " sinh vien!" << endl;
			cout << "\n===============================================\n";
			break;
		case 3:
			cout << "\n===============================================\n";
			cout << "\nThong tin sinh vien co diem trung binh cao nhat:\n";
			diemTBMax();
			cout << "\n===============================================\n";
			break;
		default:
			cout << "Lua chon khong hop le!\n";
			break;
		}
		system("pause");
	} while (lc != 0);
}
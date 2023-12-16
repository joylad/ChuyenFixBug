#pragma once
#include "Nguoi.h"
#include "BangDiem.h"
#include <vector>

class SinhVien : public Nguoi
{
private:
	static int MaSV_TuDong;
	int MaSinhVien;
	int Password;
	vector<BangDiem> BangDiemSinhVien;

public:
	SinhVien();

	SinhVien(wstring a, wstring b, wstring c, int d, int e, int f)
		: Nguoi(a, b, c, d, e, f)
	{
		MaSinhVien = MaSV_TuDong++;
		Password = MaSinhVien;
	}
	void XuatSinhVien()
	{
		wcout << setw(10) << left << MaSinhVien;
		wcout << setw(20) << left << HoTen;
		wcout << setw(15) << left << DiaChi;
		mNgaySinh.XuatNgaySinh();
		wcout << endl;
	}

	vector<BangDiem> getBangDiemSinhVien()
	{
		return BangDiemSinhVien;
	}

	void setBangDiemSinhVien(BangDiem a)
	{
		BangDiemSinhVien.push_back(a);
	}

	int getMaSinhVien()
	{
		return MaSinhVien;
	}
	int getPassword()
	{
		return Password;
	}
};


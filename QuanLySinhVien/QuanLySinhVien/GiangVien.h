#pragma once

#include "Nguoi.h"

class GiangVien : public Nguoi
{
private:
	static int MaGV_TuDong;
	int MaGiangVien;
	wstring HocVi;
	wstring ChuyenMon;
	int Password;
public:
	GiangVien();

	GiangVien(wstring a, wstring b, wstring c, int d, int e, int f, wstring g, wstring h)
		: Nguoi(a, b, c, d, e, f)
	{
		MaGiangVien = MaGV_TuDong++;
		HocVi = g;
		ChuyenMon = h;
		Password = MaGiangVien;
	}
};


#include "GiangVien.h"


int GiangVien::MaGV_TuDong = 1000;

GiangVien::GiangVien()
{
	MaGiangVien = MaGV_TuDong++;
	HocVi = L"Unkown";
	ChuyenMon = L"Unkown";
	Password = MaGiangVien;
}


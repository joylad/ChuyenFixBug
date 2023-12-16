#include "SinhVien.h"


int SinhVien::MaSV_TuDong = 10000;

SinhVien::SinhVien()
{
	MaSinhVien = MaSV_TuDong++;
	Password = MaSinhVien;
}


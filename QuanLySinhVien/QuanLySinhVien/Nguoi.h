#pragma once
#include "NgaySinh.h"

using namespace std;

class Nguoi
{
protected:
	wstring HoTen;
	wstring DiaChi;
	wstring SDT;
	NgaySinh mNgaySinh;
public:
	Nguoi();
	Nguoi(wstring a, wstring b, wstring c, int d, int e, int f)
	{
		HoTen = a;
		DiaChi = b;
		SDT = c;
		mNgaySinh = NgaySinh(d, e, f);
	}
};

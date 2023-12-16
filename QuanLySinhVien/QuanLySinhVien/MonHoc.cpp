#include "MonHoc.h"


MonHoc::MonHoc()
{
	MaMonHoc = L"Unkown";
	TenMonHoc = L"Unkown";
	SoTinChi = 0;
}

MonHoc::MonHoc(wstring a, wstring b, int c)
{
	MaMonHoc = a;
	TenMonHoc = b;
	SoTinChi = c;
}
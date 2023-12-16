#pragma once
#include "MonHoc.h"

class BangDiem : public MonHoc
{
private:
	float DiemQuaTrinh;
	float DiemThi;
	float TKHP;
public:
	BangDiem()
	{
		DiemQuaTrinh = 0;
		DiemThi = 0;
		TKHP = 0;
	}

	BangDiem(float a, float b)
	{
		DiemQuaTrinh = a;
		DiemThi = b;
		TKHP = (a + b) / 2;
	}
};


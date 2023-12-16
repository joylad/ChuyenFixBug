#include <iostream>
#include <string>
#include <io.h> 
#include <fcntl.h>
#include <iomanip>

using namespace std;

class NgaySinh
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	NgaySinh();

	NgaySinh(int a, int b, int c);

	void XuatNgaySinh()
	{
		wcout << Ngay << '/' << Thang << '/' << Nam;
	}
};


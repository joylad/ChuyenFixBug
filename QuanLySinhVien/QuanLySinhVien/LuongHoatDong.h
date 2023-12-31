#include "GiaoDien.h"
#include "SinhVien.h"
#include "Lop.h"
#include "LayDuLieu.h"


// Sử dụng tiếng việt
void SuDungToanBoTiengViet()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
}

void KhungMatKhauSinhVien()
{
	wcout << L"╔══════════ ĐĂNG NHẬP SINH VIÊN ═══════════╗" << endl;
	wcout << L"║                                          ║" << endl;
	wcout << L"║  Mã sinh viên:                           ║" << endl;
	wcout << L"║                                          ║" << endl;
	wcout << L"║  Mật khẩu:                               ║" << endl;
	wcout << L"║                                          ║" << endl;
	wcout << L"╚══════════════════════════════════════════╝" << endl;
}
/*
// 1. Đăng Nhập
void LuongSuDung()
{
	int BienDangNhap;
	do
	{
		KhungDangNhap();
		gotoxy(37, 12);
		wcin >> BienDangNhap;
		system("cls");
	} while (BienDangNhap > 3 || BienDangNhap < 1);


}
*/
// 2. Luồng cho Sinh viên sử dụng
void LuongSinhVienSuDung()
{
	// Sử dụng để nhập xuất file tiếng việt
	locale loc(locale(), new codecvt_utf8<wchar_t>);  // UTF-8

	// Danh sách các Lớp
	vector<Lop> ListLop;

	// Đọc dữ liệu 
	wifstream fin(L"DuLieuSinhVien.txt");
	if (!fin) {
		wcout << L"Không thể đọc file DuLieuSinhVien.txt\n";
	}
	else
	{
		fin.imbue(loc);
		while (!fin.eof()) // Đọc đến cuối file
		{
			wstring s_temp;
			// Lấy dữ liệu -> Họ Tên
			wstring HoTen_temp = L"";
			do
			{
				fin >> s_temp;
				HoTen_temp += L" " + s_temp;
			} while (HoTen_temp[HoTen_temp.size() - 1] != ',');
			HoTen_temp.pop_back();
			HoTen_temp.erase(0, 1);

			// Lấy dữ liệu -> Địa chỉ
			wstring DiaChi_temp = L"";
			do
			{
				fin >> s_temp;
				DiaChi_temp += L" " + s_temp;
			} while (DiaChi_temp[DiaChi_temp.size() - 1] != ',');
			DiaChi_temp.pop_back();
			DiaChi_temp.erase(0, 1);

			// Lấy dữ liệu -> Số điện thoại
			wstring SDT_temp;
			fin >> SDT_temp;
			SDT_temp.pop_back();

			wchar_t t_temp_c;
			// Lấy dữ liệu -> Ngày sinh
			int Ngay_sinh;
			wstring t_temp_d = L"";
			do
			{
				fin >> t_temp_c;
				t_temp_d += t_temp_c;
			} while (t_temp_d[t_temp_d.size() - 1] != '/');
			t_temp_d.pop_back();
			Ngay_sinh = stoi(t_temp_d);

			// Lấy dữ liệu -> Tháng sinh
			int Thang_sinh;
			wstring t_temp_m = L"";
			do
			{
				fin >> t_temp_c;
				t_temp_m += t_temp_c;
			} while (t_temp_m[t_temp_m.size() - 1] != '/');
			t_temp_m.pop_back();
			Thang_sinh = stoi(t_temp_m);

			// Lấy dữ liệu -> Năm sinh
			int Nam_sinh;
			wstring t_temp_y = L"";
			do
			{
				fin >> t_temp_c;
				t_temp_y += t_temp_c;
			} while (t_temp_y[t_temp_y.size() - 1] != ',');
			t_temp_y.pop_back();
			Nam_sinh = stoi(t_temp_y);

			// Tạo ra sinh viên với dữ liệu vừa lấy
			SinhVien SinhVien_temp(HoTen_temp, DiaChi_temp, SDT_temp, Ngay_sinh, Thang_sinh, Nam_sinh);

			// Lấy dữ liệu -> Lớp
			wstring Lop_temp;
			fin >> Lop_temp;

			int i = 0;
			// Trường hợp Lớp đã tồn tại, chỉ thêm sinh viên vào
			for (i; i < ListLop.size(); i++)
			{
				if (ListLop[i].getMaLop() == Lop_temp)
				{
					ListLop[i].setSinhVienLop(SinhVien_temp);
					break;
				}
			}

			// Lớp chưa tồn tại, tạo ra lớp
			if (i >= ListLop.size())
			{
				Lop LopMoi = Lop(Lop_temp);
				ListLop.push_back(LopMoi);
				ListLop[i].setSinhVienLop(SinhVien_temp);
			}
		}
		fin.close();
	}


	int BienTaiKhoan;
	int BienMatKhau;
	bool XacDinhDangNhap = false;
	do 
	{
		KhungMatKhauSinhVien();
		gotoxy(18, 3);

		wcin >> BienTaiKhoan;

		for (int i = 0; i < ListLop.size(); i++)
		{
			for (int j = 0; j < ListLop[i].getSinhVienLop().size(); j++)
			{
				if (BienTaiKhoan == ListLop[i].getSinhVienLop()[j].getMaSinhVien())
				{ 
					gotoxy(14, 5);
					wcin >> BienMatKhau;
					if (BienMatKhau == ListLop[i].getSinhVienLop()[j].getPassword())
					{
						XacDinhDangNhap = true;
					}
				}
			}
		}
		system("cls");
	} while (XacDinhDangNhap == false);
	

}
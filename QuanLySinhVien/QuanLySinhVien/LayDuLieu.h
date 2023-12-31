#include <vector>
#include "SinhVien.h"
#include "Lop.h"
#include "MonHoc.h"
#include "GiangVien.h"
#include <locale>
#include <codecvt>
#include <fstream> 
using namespace std;
/*
void LayDuLieuSinhVien()
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

			int i;
			// Trường hợp Lớp đã tồn tại, chỉ thêm sinh viên vào
			for (i = 0; i < ListLop.size(); i++)
			{
				if (ListLop[i].getMaLop() == Lop_temp)
				{
					ListLop[i].setSinhVienLop(SinhVien_temp);
					break;
				}
			}

			// Lớp chưa tồn tại, tạo ra lớp
			if (i > ListLop.size())
			{
				Lop LopMoi = Lop(Lop_temp);
				ListLop.push_back(LopMoi);
				ListLop[i].setSinhVienLop(SinhVien_temp);
			}
		}
		fin.close();
	}
}

void LayDuLieuMonHoc()
{
	// Sử dụng để nhập xuất file tiếng việt
	locale loc(locale(), new codecvt_utf8<wchar_t>);  // UTF-8

	vector<MonHoc> ListMonHoc;
	wifstream fin(L"DuLieuMonHoc.txt");
	if (!fin) {
		wcout << L"Không thể đọc file DuLieuMonHoc.txt\n";
	}
	else
	{
		fin.imbue(loc);
		while (!fin.eof()) // Đọc đến cuối file
		{
			// Lấy dữ liệu -> Mã môn
			wstring MaMon_temp;
			fin >> MaMon_temp;
			MaMon_temp.pop_back();

			wstring s_temp;
			// Lấy dữ liệu -> Tên môn
			wstring TenMon_temp = L"";
			do
			{
				fin >> s_temp;
				TenMon_temp += L" " + s_temp;
			} while (TenMon_temp[TenMon_temp.size() - 1] != ',');
			TenMon_temp.pop_back();
			TenMon_temp.erase(0, 1);

			// Lấy dữ liệu -> Số tín chỉ
			int SoTin_temp;
			fin >> SoTin_temp;

			ListMonHoc.push_back(MonHoc(MaMon_temp, TenMon_temp, SoTin_temp));
		}
		fin.close();
	}

}

void LayDuLieuGiangVien()
{
	// Sử dụng để nhập xuất file tiếng việt
	locale loc(locale(), new codecvt_utf8<wchar_t>);  // UTF-8

	// Danh sách các Lớp
	vector<GiangVien> ListGiangVien;
	// Đọc dữ liệu 
	wifstream fin(L"DuLieuGiangVien.txt");
	if (!fin) {
		wcout << L"Không thể đọc file DuLieuGiangVien.txt\n";
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
			wcout << Thang_sinh << endl;

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

			// Lấy ra dữ liệu học vị của giảng viên 
			wstring HocVi_temp;
			fin >> HocVi_temp;
			HocVi_temp.pop_back();

			// Lấy dữ liệu chuyên môn của giảng viên
			wstring ChuyenMon_temp;
			getline(fin, ChuyenMon_temp);
			ChuyenMon_temp.erase(0, 1);

			ListGiangVien.push_back(GiangVien(HoTen_temp, DiaChi_temp, SDT_temp, Ngay_sinh, Thang_sinh, Nam_sinh, HocVi_temp, ChuyenMon_temp));
		}
		fin.close();
	}

}
*/
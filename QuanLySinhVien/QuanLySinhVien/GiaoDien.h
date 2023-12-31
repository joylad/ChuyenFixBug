#include <iostream>
#include<io.h>
#include<fcntl.h>
#include "Dohoa.h"
#include <iomanip>

using namespace std;

// Sử dụng tiếng việt
void SuDungToanBoTiengViet()
{
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stdout), _O_U16TEXT);
}

void KhungDangNhap()
{
    wcout << L"╔═════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    wcout << L"║                                   TRƯỜNG ĐẠI HỌC THỦY LỢI                               ║" << endl;
    wcout << L"║                                         ----***----                                     ║" << endl;
    wcout << L"║                                CHƯƠNG TRÌNH QUẢN LÍ SINH VIÊN                           ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                      ___ ĐĂNG NHẬP___                                   ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║    ┌────────────────────┐        ┌─────────────────────┐       ┌──────────────────┐     ║" << endl;
    wcout << L"║    │ 1.TÔI LÀ SINH VIÊN │        │ 2.TÔI LÀ GIẢNG VIÊN │       │ 3.TÔI LÀ QUẢN LÝ │     ║" << endl;
    wcout << L"║    └────────────────────┘        └─────────────────────┘       └──────────────────┘     ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║   VUI LÒNG NHẬP LỰA CHỌN CỦA BẠN:                                                       ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"╚═════════════════════════════════════════════════════════════════════════════════════════╝" << endl;

};

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
// Khung in ra danh sách giảng viên
void KhungDanhSachGiangVien()
{

    wcout << L"                         ╔═════════════════════════════════ DANH SÁCH GIẢNG VIÊN ════════════════════════════════╗" << endl;
    wcout << L"                         ║┌─────┬──────────────────┬──────────┬──────────┬───────┬───────────────┬──────────────┐║" << endl;
    wcout << L"                         ║│Mã GV│     TÊN GV       │ NĂM SINH │ ĐỊA CHỈ  │  LỚP  │ SỐ ĐIỆN THOẠI │              │║" << endl;
    wcout << L"                         ║└─────┴──────────────────┴──────────┴──────────┴───────┴───────────────┴──────────────┘║" << endl;
    wcout << L"                         ╚═══════════════════════════════════════════════════════════════════════════════════════╝" << endl;
}

void DANHSACH()
{
    
    wcout << L"                         ╔═════ Danh sách lớp ═════╗" << endl;
    wcout << L"                         ║┌──────────────────────┐║" << endl;
    wcout << L"                         ║│Mã lớp                │║" << endl;
    wcout << L"                         ║└──────────────────────┘║" << endl;
    wcout << L"                         ╚═════════════════════════╝" << endl;
}


//MENU DANG NHAP
void MenuQuanLy()
{
    wcout << L"                                 TRƯỜNG ĐẠI HỌC THỦY LỢI" << endl;
    wcout << L"                                       ----***----" << endl << endl << endl;
    wcout << L"╔═════════════════════════════════════════════════════════════════════════════════════════╗" << endl;
    wcout << L"║                            CHƯƠNG TRÌNH QUẢN LÍ SINH VIÊN                               ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║   1. THÊM SINH VIÊN                                                                     ║" << endl;
    wcout << L"║   2. HIỂN THỊ DANH SÁCH SINH VIÊN                                                       ║" << endl;
    wcout << L"║   3. HIỂN THỊ CHƯƠNG TRÌNH ĐÀO TẠO                                                      ║" << endl;
    wcout << L"║   4. HIỂN THỊ DANH SÁCH GIẢNG VIÊN                                                      ║" << endl;
    wcout << L"║   5. THÊM GIẢNG VIÊN                                                                    ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"╚═════════════════════════════════════════════════════════════════════════════════════════╝" << endl << endl << endl << endl;

    wcout << L"                         VUI LÒNG NHẬP LỰA CHỌN CỦA BẠN: " << endl;
}


//BANG DIEM SINH VIEN
void BANGDIEMSV() {
    //91 dấu cách ngang
  
    wcout << L"                                     TRƯỜNG ĐẠI HỌC THỦY LỢI                                 " << endl;
    wcout << L"                                          ----***----                                       " << endl << endl;

    wcout << L"╔═════════════════════════════════════BẢNG ĐIỂM SINH VIÊN═════════════════════════════════╗" << endl;
    wcout << L"║┌───────┬───────────────────────────┬───────────┬────────┬────────────────────┬─────────┐║" << endl;
    wcout << L"║│ Mã SV │          TÊN SV           │    LỚP    │ MÃ MÔN │     TÊN MÔN HỌC    │   ĐIỂM  │║" << endl;
    wcout << L"║│       │                           │           │        │                    │    10   │║" << endl;
    wcout << L"║└───────┴───────────────────────────┴───────────┴────────┴────────────────────┴─────────┘║" << endl;
    wcout << L"╚═════════════════════════════════════════════════════════════════════════════════════════╝" << endl;


    textcolor(0);
};
//NHAP SINH VIEN
void NHAPSINHVIEN()
{
    string x;

    wcout << L"                                   TRƯỜNG ĐẠI HỌC THỦY LỢI                                 " << endl;
    wcout << L"                                         ----***----                                       " << endl;
    wcout << L" " << endl;
    wcout << L" " << endl;

    wcout << L"╔═══════════════════════════════════════THÊM SINH VIÊN════════════════════════════════════╗" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║       HỌ VÀ TÊN:                       ĐỊA CHỈ:             SỐ ĐIỆN THOẠI:              ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"║                       NĂM SINH:                     LỚP:                                ║" << endl;
    wcout << L"║                                                                                         ║" << endl;
    wcout << L"╚═════════════════════════════════════════════════════════════════════════════════════════╝" << endl << endl;

};

//DANH SACH SINH VIEN
void KhungDanhSachSinhVien()
{

    wcout << L"                                  TRƯỜNG ĐẠI HỌC THỦY LỢI                                 " << endl;
    wcout << L"                                        ----***----                                       " << endl;
    wcout << L"╔══════════════════════════════════DANH SÁCH SINH VIÊN════════════════════════════════════╗" << endl;
    wcout << L"║┌───────┬───────────────────────────┬──────────┬────────────┬───────────┬───────────────┐║" << endl;
    wcout << L"║│ Mã SV │          TÊN SV           │ NĂM SINH │   ĐỊA CHỈ  │    LỚP    │ SỐ ĐIỆN THOẠI │║" << endl;
    wcout << L"║│00000  │  NGUYen thi minh phuong   │08/04/2004│ Bình Thuận │ k64ktpm 5 │  0967044623   │║" << endl;
    wcout << L"║└───────┴───────────────────────────┴──────────┴────────────┴───────────┴───────────────┘║" << endl;
    wcout << L"╚═════════════════════════════════════════════════════════════════════════════════════════╝" << endl;


};

void CHUONGTRINHDAOTAO()
{

    wcout << L"╔════════════════════════════════════CHƯƠNG TRÌNH ĐẠO TẠO══════════════════════════════════╗" << endl;
    wcout << L"║  ┌──────────────┬──────────────────────────────────────────────────────┬──────────────┐  ║" << endl;
    wcout << L"║  │  MÃ MÔN HỌC  │                      TÊN MÔN HỌC                     │    SỐ TÍN    │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  │              │                                                      │              │  ║" << endl;
    wcout << L"║  └──────────────┴──────────────────────────────────────────────────────┴──────────────┘  ║" << endl;
    wcout << L"╚══════════════════════════════════════════════════════════════════════════════════════════╝" << endl;

};
void BANGTIMKIEM()
{

    wcout << L"╔══════════════════════════════════════════TÌM KIẾM════════════════════════════════════════╗" << endl;
    wcout << L"║  ┌─────────────────────┬──────────────────────────────────────────────────────────────┐  ║" << endl;
    wcout << L"║  │  NHẬP MÃ SINH VIÊN  │                                                              │  ║" << endl;
    wcout << L"║  │                     │                                                              │  ║" << endl;
    wcout << L"║  │                     │                                                              │  ║" << endl;
    wcout << L"║  └─────────────────────┴──────────────────────────────────────────────────────────────┘  ║" << endl;
    wcout << L"╚══════════════════════════════════════════════════════════════════════════════════════════╝" << endl;



    wcout << L"╔═════════════════════════════════════ KẾT QUẢ TÌM KIẾM ═══════════════════════════════════╗" << endl;
    wcout << L"║  ┌──────────────┬────────────────────────┬──────────┬────────────┬─────────┬──────────┐  ║" << endl;
    wcout << L"║  │ MÃ SINH VIÊN │         HỌ TÊN         │    LỚP   │   MÃ MÔN   │ SỐ TÍN  │  ĐIỂM    │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  │              │                        │          │            │         │          │  ║" << endl;
    wcout << L"║  └──────────────┴────────────────────────┴──────────┴────────────┴─────────┴──────────┘  ║" << endl;
    wcout << L"╚══════════════════════════════════════════════════════════════════════════════════════════╝" << endl;


}


#include <iostream>
#include <chrono>
#include <thread>
#include "Nguoi.h"
#include "KhachSan.h"
#include "QuanLy.h"
using namespace std;

enum TINH_NANG
{
    QUAY_LAI = 0,
    THEM_KHACH_HANG = 1,
    XOA_KHACH_HANG = 2,
    THEM_LUOT_THUE_MOI = 3,
    XOA_LUOT_THUE = 4,
    TRA_PHONG = 5,
    HIEN_THI_DANH_SACH_PHONG = 6,
    HIEN_THI_DANH_SACH_KHACH_HANG = 7,
    HIEN_THI_DANH_SACH_LUOT_THUE = 8,
    DONG_CHUONG_TRINH = 9,
};

int QuayLai()
{
    int ret = 1;
    while (ret)
    {
        cout << "Nhan " << QUAY_LAI << " va enter de quay lai." << endl;
        cin >> ret;
        system("cls");
    }
    return ret;
}
int main()
{
    QuanLy QuanLyKhachSan;
    int TuyChon = 0, DongChuongTrinh = 1;
    while (DongChuongTrinh)
    {
        cout << "Hay chon mot trong cac tinh nang cua he thong duoi day:" << endl;
        cout << THEM_KHACH_HANG << ". Them khach hang." << endl;
        cout << XOA_KHACH_HANG << ". Xoa khach hang." << endl;
        cout << THEM_LUOT_THUE_MOI << ". Them luot thue." << endl;
        cout << XOA_LUOT_THUE << ". Xoa luot thue." << endl;
        cout << TRA_PHONG << ". Tra phong." << endl;
        cout << HIEN_THI_DANH_SACH_PHONG << ". Hien thi danh sach phong." << endl;
        cout << HIEN_THI_DANH_SACH_KHACH_HANG << ". Hien thi danh sach khach hang." << endl;
        cout << HIEN_THI_DANH_SACH_LUOT_THUE << ". Hien thi danh sach luot thue." << endl;
        cout << DONG_CHUONG_TRINH << ". Dong chuong trinh." << endl;
        cin >> TuyChon;

        switch (TuyChon)
        {
        case THEM_KHACH_HANG:
            QuanLyKhachSan.ThemKhachHang();
            QuanLyKhachSan.HienThiDanhSachKhachHang();
            QuayLai();
            break;
        case XOA_KHACH_HANG:
            QuanLyKhachSan.XoaKhachHang();
            QuanLyKhachSan.HienThiDanhSachKhachHang();
            QuayLai();
            break;
        case THEM_LUOT_THUE_MOI:
            QuanLyKhachSan.ThemLuotThue();
            QuanLyKhachSan.HienThiDanhSachLuotThue();
            QuayLai();
            break;
        case XOA_LUOT_THUE:
            QuanLyKhachSan.XoaLuotThue();
            QuanLyKhachSan.HienThiDanhSachLuotThue();
            QuayLai();
            break;
        case TRA_PHONG:
            QuanLyKhachSan.TraPhong();
            QuanLyKhachSan.HienThiDanhSachLuotThue();
            QuayLai();
            break;
        case HIEN_THI_DANH_SACH_PHONG:
            QuanLyKhachSan.HienThiDanhSachPhong();
            break;
        case HIEN_THI_DANH_SACH_KHACH_HANG:
            QuanLyKhachSan.HienThiDanhSachKhachHang();
            break;
        case HIEN_THI_DANH_SACH_LUOT_THUE:
            QuanLyKhachSan.HienThiDanhSachLuotThue();
            break;
        case DONG_CHUONG_TRINH:
            DongChuongTrinh = 0;
            cout << "TAM BIET!";
            break;
        default:

            while (TuyChon < THEM_KHACH_HANG || TuyChon > DONG_CHUONG_TRINH)
            {
                system("cls");
                cout << "Hay chon mot trong cac tinh nang cua he thong duoi day:" << endl;
                cout << THEM_KHACH_HANG << ". Them khach hang." << endl;
                cout << XOA_KHACH_HANG << ". Xoa khach hang." << endl;
                cout << THEM_LUOT_THUE_MOI << ". Them luot thue." << endl;
                cout << XOA_LUOT_THUE << ". Xoa luot thue." << endl;
                cout << TRA_PHONG << ". Tra phong." << endl;
                cout << HIEN_THI_DANH_SACH_PHONG << ". Hien thi danh sach phong." << endl;
                cout << HIEN_THI_DANH_SACH_KHACH_HANG << ". Hien thi danh sach khach hang." << endl;
                cout << HIEN_THI_DANH_SACH_LUOT_THUE << ". Hien thi danh sach luot thue." << endl;
                cout << DONG_CHUONG_TRINH << ". Dong chuong trinh." << endl;
                cout << "Nhap sai tuy chon!" << endl;
                cout << "Moi nhap Lai: ";
                cin >> TuyChon;
            }

            break;
        }
    }

    return 0;
}

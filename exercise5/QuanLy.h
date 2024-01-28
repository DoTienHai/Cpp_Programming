#ifndef QUAN_LY_H
#define QUAN_LY_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <string>
#include "LuotThue.h"
#include "KhachSan.h"
using namespace std;

class QuanLy
{
private:
    /* data */
    vector<Nguoi> DanhSachKhachHang;
    vector<LuotThue> DanhSachLuotThue;
    KhachSan KhachSanABC;

public:
    QuanLy(/* args */);
    ~QuanLy();

    void ThemKhachHang();
    void XoaKhachHang();
    vector<Nguoi>::iterator TimKiemKhachHang(string CCCD);

    void ThemLuotThue();
    void XoaLuotThue();
    void TraPhong();
    vector<LuotThue>::iterator TimKiemLuotThue(string MaLuot);

    void HienThiDanhSachPhong();
    void HienThiDanhSachKhachHang();
    void HienThiDanhSachLuotThue();
};

#endif // !QUAN_LY_H
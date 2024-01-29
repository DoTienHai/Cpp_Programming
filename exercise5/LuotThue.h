#ifndef LUOT_THUE_H
#define LUOT_THUE_H
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include "Phong.h"
#include "Nguoi.h"
using namespace std;

enum THANH_TOAN {CHUA_THANH_TOAN = 0, TIEN_MAT = 1, CHUYEN_KHOAN = 2};
class LuotThue
{
private:
    /* data */
    Nguoi *KhachHang;
    Phong *PhongThue;
    unsigned int ThoiDiemTao;
    unsigned int ThoiDiemTra;
    string MaLuot;
    enum THANH_TOAN ThanhToan;

public:
    LuotThue(/* args */);
    LuotThue(Nguoi *KhachHang, Phong *PhongThue, const unsigned int ThoiDiemTao, const unsigned int ThoiDiemTra);
    ~LuotThue();

    void SetKhachHang(Nguoi *KhachHang);
    void SetPhongThue(Phong *PhongThue);
    void SetThoiDiemTao(const unsigned int &ThoiDiemTao);
    void SetThoiDiemTra(const unsigned int &ThoiDiemTra);
    void SetMaLuot(string MaLuot);
    void SetThanhToan(enum THANH_TOAN ThanhToan);

    Nguoi GetKhachHang();
    Phong GetPhongThue();
    unsigned int GetThoiDiemTao();
    unsigned int GetThoiDiemTra();
    string GetMaLuot();
    enum THANH_TOAN GetThanhToan();
};

#endif // !LUOT_THUE_H
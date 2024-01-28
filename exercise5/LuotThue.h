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

class LuotThue
{
private:
    /* data */
    Nguoi *KhachHang;
    Phong *PhongThue;
    time_t ThoiDiemTao;
    time_t ThoiDiemTra;
    string MaLuot;

public:
    LuotThue(/* args */);
    LuotThue(Nguoi *KhachHang, Phong *PhongThue, const time_t ThoiDiemTao, const time_t ThoiDiemTra);
    ~LuotThue();

    void SetKhachHang(Nguoi *KhachHang);
    void SetPhongThue(Phong *PhongThue);
    void SetThoiDiemTao(const time_t &ThoiDiemTao);
    void SetThoiDiemTra(const time_t &ThoiDiemTra);
    void SetMaLuot(string MaLuot);

    Nguoi GetKhachHang();
    Phong GetPhongThue();
    time_t GetThoiDiemTao();
    time_t GetThoiDiemTra();
    string GetMaLuot();
};

#endif // !LUOT_THUE_H
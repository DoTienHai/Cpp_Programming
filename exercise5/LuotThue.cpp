#include "LuotThue.h"

LuotThue::LuotThue(/* args */) {}
LuotThue::LuotThue(Nguoi *KhachHang, Phong *PhongThue, const time_t ThoiDiemTao, const time_t ThoiDiemTra)
{
    this->SetKhachHang(KhachHang);
    this->SetPhongThue(PhongThue);
    this->SetThoiDiemTao(ThoiDiemTao);
    this->SetThoiDiemTra(ThoiDiemTra);
    this->SetMaLuot(KhachHang->GetCCCD());
}

LuotThue::~LuotThue()
{
    KhachHang = nullptr;
    PhongThue = nullptr;
}

void LuotThue::SetKhachHang(Nguoi *KhachHang)
{
    this->KhachHang = KhachHang;
}
void LuotThue::SetPhongThue(Phong *PhongThue)
{
    this->PhongThue = PhongThue;
}
void LuotThue::SetThoiDiemTao(const time_t &ThoiDiemTao)
{
    this->ThoiDiemTao = ThoiDiemTao;
}
void LuotThue::SetThoiDiemTra(const time_t &ThoiDiemTra)
{
    this->ThoiDiemTra = ThoiDiemTra;
}
void LuotThue::SetMaLuot(string MaLuot)
{
    this->MaLuot = MaLuot;
}

Nguoi LuotThue::GetKhachHang()
{
    return *(this->KhachHang);
}
Phong LuotThue::GetPhongThue()
{
    return *(this->PhongThue);
}
time_t LuotThue::GetThoiDiemTao()
{
    return this->ThoiDiemTao;
}
time_t LuotThue::GetThoiDiemTra()
{
    return this->ThoiDiemTra;
}
string LuotThue::GetMaLuot()
{
    return this->MaLuot;
}
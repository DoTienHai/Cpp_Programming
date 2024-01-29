#include "LuotThue.h"

LuotThue::LuotThue(/* args */) {}
LuotThue::LuotThue(Nguoi *KhachHang, Phong *PhongThue, const unsigned int ThoiDiemTao, const unsigned int ThoiDiemTra)
{
    this->SetKhachHang(KhachHang);
    this->SetPhongThue(PhongThue);
    this->SetThoiDiemTao(ThoiDiemTao);
    this->SetThoiDiemTra(ThoiDiemTra);
    this->SetMaLuot(KhachHang->GetCCCD() + "_" + to_string(ThoiDiemTao));
    this->SetThanhToan(CHUA_THANH_TOAN);
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
void LuotThue::SetThoiDiemTao(const unsigned int &ThoiDiemTao)
{
    this->ThoiDiemTao = ThoiDiemTao;
}
void LuotThue::SetThoiDiemTra(const unsigned int &ThoiDiemTra)
{
    this->ThoiDiemTra = ThoiDiemTra;
}
void LuotThue::SetMaLuot(string MaLuot)
{
    this->MaLuot = MaLuot;
}
void LuotThue::SetThanhToan(enum THANH_TOAN ThanhToan){
    this->ThanhToan = ThanhToan;
}


Nguoi LuotThue::GetKhachHang()
{
    return *(this->KhachHang);
}
Phong LuotThue::GetPhongThue()
{
    return *(this->PhongThue);
}
unsigned int LuotThue::GetThoiDiemTao()
{
    return this->ThoiDiemTao;
}
unsigned int LuotThue::GetThoiDiemTra()
{
    return this->ThoiDiemTra;
}
string LuotThue::GetMaLuot()
{
    return this->MaLuot;
}

enum THANH_TOAN LuotThue::GetThanhToan(){
 return this->ThanhToan;
}
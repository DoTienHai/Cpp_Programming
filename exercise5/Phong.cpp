#include "Phong.h"

Phong::Phong(/* args */) {}
Phong::Phong(const string &MaSoPhong, const int &Gia, const TRANG_THAI &TrangThai)
{
    this->SetMaSoPhong(MaSoPhong);
    this->SetGia(Gia);
    this->setTrangThai(TrangThai);
}

Phong::~Phong() {}

void Phong::SetMaSoPhong(const string &MaSoPhong)
{
    this->MaSoPhong = MaSoPhong;
}
void Phong::SetGia(const int &Gia)
{
    this->Gia = Gia;
}
void Phong::setTrangThai(const TRANG_THAI &TrangThai)
{
    this->TrangThai = TrangThai;
}

string Phong::GetMaSoPhong()
{
    return this->MaSoPhong;
}
int Phong::GetGia()
{
    return this->Gia;
}
TRANG_THAI Phong::getTrangThai()
{
    return this->TrangThai;
}

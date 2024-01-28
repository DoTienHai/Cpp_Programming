#include "Nguoi.h"

Nguoi::Nguoi(/* args */) {}

Nguoi::Nguoi(const string &HoTen, const int &Tuoi, const string &CCCD)
{
    this->SetHoTen(HoTen);
    this->SetTuoi(Tuoi);
    this->SetCCCD(CCCD);
}

Nguoi::~Nguoi() {}

void Nguoi::SetHoTen(const string &HoTen)
{
    this->HoTen = HoTen;
}
void Nguoi::SetTuoi(const int &Tuoi)
{
    this->Tuoi = Tuoi;
}
void Nguoi::SetCCCD(const string &CCCD)
{
    this->CCCD = CCCD;
}

string Nguoi::GetHoTen()
{
    return this->HoTen;
}
int Nguoi::GetTuoi()
{
    return this->Tuoi;
}
string Nguoi::GetCCCD()
{
    return this->CCCD;
}

#include "KhachSan.h"

KhachSan::KhachSan()
{
    for (int i = 1; i <= SO_LUONG_PHONG_LOAI_A; i++)
    {
        this->PhongLoaiA.push_back(Phong("A" + to_string(i), GIA_PHONG_LOAI_A, PHONG_TRONG));
    }
    for (int i = 1; i <= SO_LUONG_PHONG_LOAI_B; i++)
    {
        this->PhongLoaiB.push_back(Phong("B" + to_string(i), GIA_PHONG_LOAI_B, PHONG_TRONG));
    }
    for (int i = 1; i <= SO_LUONG_PHONG_LOAI_C; i++)
    {
        this->PhongLoaiC.push_back(Phong("C" + to_string(i), GIA_PHONG_LOAI_C, PHONG_TRONG));
    }
}

KhachSan::~KhachSan()
{
}

vector<Phong> KhachSan::GetPhongTheoLoaiA()
{
    return this->PhongLoaiA;
}
vector<Phong> KhachSan::GetPhongTheoLoaiB()
{
    return this->PhongLoaiB;
}
vector<Phong> KhachSan::GetPhongTheoLoaiC()
{
    return this->PhongLoaiC;
}

vector<Phong>::iterator KhachSan::TimKiemPhong(string MaSoPhong)
{
    for (vector<Phong>::iterator it = this->PhongLoaiA.begin(); it != this->PhongLoaiA.end(); it++)
    {
        if (it->GetMaSoPhong() == MaSoPhong)
        {
            return it;
        }
    }
    for (vector<Phong>::iterator it = this->PhongLoaiB.begin(); it != this->PhongLoaiB.end(); it++)
    {
        if (it->GetMaSoPhong() == MaSoPhong)
        {
            return it;
        }
    }
    for (vector<Phong>::iterator it = this->PhongLoaiC.begin(); it != this->PhongLoaiC.end(); it++)
    {
        if (it->GetMaSoPhong() == MaSoPhong)
        {
            return it;
        }
    }
    return this->PhongLoaiA.end();
}

void KhachSan::HienThiPhongTheoLoai(vector<Phong> PhongVector)
{
    string context = "DANH SACH PHONG THEO LOAI";
    int len = context.length();
    cout << setw((100 - len) / 2 + len) << setfill('_') << right
         << context
         << setw((100 - len) / 2) << setfill('_') << right << "" << endl;

    cout << setw(10) << setfill(' ') << left << "Phong"
         << setw(10) << setfill(' ') << left << "Gia"
         << setw(20) << setfill(' ') << left << "Trang thai"
         << endl;
    for (Phong &phong : PhongVector)
    {
        cout << setw(20) << setfill(' ') << left << phong.GetMaSoPhong()
             << setw(10) << setfill(' ') << left << phong.GetGia()
             << setw(20) << setfill(' ') << left << (phong.getTrangThai() ? "CO NGUOI" : "TRONG")
             << &phong
             << endl;
    }
}

void KhachSan::HienThi()
{
    this->HienThiPhongTheoLoai(this->PhongLoaiA);
    this->HienThiPhongTheoLoai(this->PhongLoaiB);
    this->HienThiPhongTheoLoai(this->PhongLoaiC);
}
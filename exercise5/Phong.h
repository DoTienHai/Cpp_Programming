#ifndef PHONG_H
#define PHONG_H
#include <iostream>
using namespace std;

enum TRANG_THAI {CO_NGUOI_THUE = 1, PHONG_TRONG = 0};

class Phong
{
private:
    /* data */
    string MaSoPhong;
    int Gia;
    TRANG_THAI TrangThai;
public:
    Phong(/* args */);
    Phong(const string &MaSoPhong, const int &Gia, const TRANG_THAI & TrangThai);
    ~Phong();

    void SetMaSoPhong(const string &MaSoPhong);
    void SetGia(const int &Gia);
    void setTrangThai(const TRANG_THAI & TrangThai);

    string GetMaSoPhong();
    int GetGia();
    TRANG_THAI getTrangThai();

};

#endif // !PHONG_H
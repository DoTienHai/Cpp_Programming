#ifndef KHACH_SAN_H
#define KHACH_SAN_H
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include "Phong.h"
using namespace std;

#define SO_LUONG_PHONG_LOAI_A 20
#define SO_LUONG_PHONG_LOAI_B 20
#define SO_LUONG_PHONG_LOAI_C 20
#define GIA_PHONG_LOAI_A 500
#define GIA_PHONG_LOAI_B 300
#define GIA_PHONG_LOAI_C 100

class KhachSan
{
private:
    /* data */
    vector<Phong> PhongLoaiA;
    vector<Phong> PhongLoaiB;
    vector<Phong> PhongLoaiC;

public:
    KhachSan();
    ~KhachSan();

    vector<Phong>::iterator GetPhong(string MaSoPhong);

    void HienThiPhongTheoLoai(vector<Phong> PhongVector);
    void HienThi();

};

#endif // !KHACH_SAN_H
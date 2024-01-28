#ifndef NGUOI_H
#define NGUOI_H
#include <iostream>
using namespace std;

class Nguoi
{
private:
    /* data */
    string HoTen;
    int Tuoi;
    string CCCD;

public:
    Nguoi(/* args */);
    Nguoi(const string &HoTen, const int &Tuoi, const string &CCCD);
    ~Nguoi();

    void SetHoTen(const string &HoTen);
    void SetTuoi(const int &Tuoi);
    void SetCCCD(const string &CCCD);

    string GetHoTen();
    int GetTuoi();
    string GetCCCD();
};

#endif // !NGUOI_H
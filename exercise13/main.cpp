#include <iostream>
using namespace std;

enum TINH_NANG
{
    QUAY_LAI = 0,
    THEM_KHACH_HANG = 1,
    XOA_KHACH_HANG = 2,
    THEM_LUOT_THUE_MOI = 3,
    XOA_LUOT_THUE = 4,
    TRA_PHONG = 5,
    HIEN_THI_DANH_SACH_PHONG = 6,
    HIEN_THI_DANH_SACH_KHACH_HANG = 7,
    HIEN_THI_DANH_SACH_LUOT_THUE = 8,
    DONG_CHUONG_TRINH = 9,
};

void QuayLai()
{
    int ret = 1;
    while (ret)
    {
        cout << "Nhan " << QUAY_LAI << " va enter de quay lai." << endl;
        cin >> ret;
        system("cls");
    }
}

int main()
{

    return 0;
}

#include "QuanLy.h"

QuanLy::QuanLy(/* args */)
{
}

QuanLy::~QuanLy()
{
}

void QuanLy::ThemKhachHang()
{
    string HoTen;
    int Tuoi;
    string CCCD;
    cout << "Moi nhap ten khach hang: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, HoTen);
    cout << "Moi nhap tuoi khach hang: ";
    cin >> Tuoi;
    cout << "Moi nhap so CCCD khach hang: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, CCCD);
    DanhSachKhachHang.push_back(Nguoi(HoTen, Tuoi, CCCD));
}
void QuanLy::XoaKhachHang()
{
    string CCCD;
    this->HienThiDanhSachKhachHang();
    cout << "Nhap CCCD cua khach hang muon xoa." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, CCCD);
    vector<Nguoi>::iterator it = this->TimKiemKhachHang(CCCD);
    if (it != this->DanhSachKhachHang.end())
    {
        this->DanhSachKhachHang.erase(it);
        cout << "XOA THONG TIN KHACH HANG THANH CONG!" << endl;
    }
    else
    {
        cout << "KHONG TIM DUOC THONG TIN KHACH HANG!" << endl;
    }
}

vector<Nguoi>::iterator QuanLy::TimKiemKhachHang(string CCCD)
{

    for (vector<Nguoi>::iterator it = this->DanhSachKhachHang.begin(); it != this->DanhSachKhachHang.end(); it++)
    {
        if ((*it).GetCCCD() == CCCD)
        {
            return it;
        }
    }
    return this->DanhSachKhachHang.end();
}

void QuanLy::ThemLuotThue()
{
    string CCCD;
    Nguoi *khachHang = nullptr;
    string MaSoPhong;
    Phong *PhongThue = nullptr;

    cout << "Moi nhap CCCD de xac dinh khach hang da toi day chua." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, CCCD);
    vector<Nguoi>::iterator itKhachHang = this->TimKiemKhachHang(CCCD);
    if (itKhachHang == this->DanhSachKhachHang.end())
    {
        cout << "Khach hang chua tung den day. Can them mot so thong tin ca nhan cua khach hang." << endl;
        string HoTen;
        int Tuoi;
        cout << "Moi nhap ten khach hang: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, HoTen);
        cout << "Moi nhap tuoi khach hang: ";
        cin >> Tuoi;
        this->DanhSachKhachHang.push_back(Nguoi(HoTen, Tuoi, CCCD));
        itKhachHang = this->TimKiemKhachHang(CCCD);
    }
    khachHang = &(*itKhachHang);

    system("cls");
    this->HienThiDanhSachPhong();
    cout << "Nhap ma so phong muon thue: " << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, MaSoPhong);
    if (KhachSanABC.TimKiemPhong(MaSoPhong) != this->KhachSanABC.GetPhongTheoLoaiA().end())
    {
        PhongThue = &(*KhachSanABC.TimKiemPhong(MaSoPhong));
        if (PhongThue->getTrangThai() == PHONG_TRONG)
        {
            PhongThue->setTrangThai(CO_NGUOI_THUE);
            auto now = chrono::time_point_cast<chrono::seconds>(chrono::system_clock::now());
            time_t currentTime = chrono::system_clock::to_time_t(now);
            this->DanhSachLuotThue.push_back(LuotThue(khachHang, PhongThue, currentTime, currentTime));
        }
        else
        {
            cout << "Phong da co nguoi thue." << endl;
        }
    }
    else
    {
        cout << "Nhap sai ma phong." << endl;
    }
}
void QuanLy::XoaLuotThue()
{
    string MaLuot;
    this->HienThiDanhSachLuotThue();
    cout << "Nhap ma luoi muon xoa." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, MaLuot);
    vector<LuotThue>::iterator it = this->TimKiemLuotThue(MaLuot);
    if (it != this->DanhSachLuotThue.end())
    {
        this->DanhSachLuotThue.erase(it);
        cout << "XOA THONG TIN LUOT THUE THANH CONG!" << endl;
    }
    else
    {
        cout << "THONG TIN LUOT THUE NHAP SAI!" << endl;
    }
}

void QuanLy::TraPhong()
{
    string MaLuot;
    this->HienThiDanhSachLuotThue();
    cout << "Nhap ma luoi muon thanh toan." << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, MaLuot);
    vector<LuotThue>::iterator it = this->TimKiemLuotThue(MaLuot);
    if (it != this->DanhSachLuotThue.end())
    {
        auto now = chrono::time_point_cast<chrono::seconds>(chrono::system_clock::now());
        time_t currentTime = chrono::system_clock::to_time_t(now);
        LuotThue *LuotThue = &(*it);
        LuotThue->SetThoiDiemTra(currentTime);
        unsigned int NgayThue = LuotThue->GetThoiDiemTra() - LuotThue->GetThoiDiemTao() + 11;
        cout << "Ngay Thue: " << NgayThue << endl;
        int tt;
        cout << "So tien can thanh toan: " << LuotThue->GetPhongThue().GetGia() * NgayThue << endl;
        cout << "Thanh toan bang: " << endl;
        cout << TIEN_MAT << ". Tien mat." << endl;
        cout << CHUYEN_KHOAN << ". Chuyen khoan." << endl;
        cin >> tt;
        LuotThue->SetThanhToan((enum THANH_TOAN)tt);
    }
    else
    {
        cout << "THONG TIN LUOT THUE NHAP SAI!" << endl;
    }
}
vector<LuotThue>::iterator QuanLy::TimKiemLuotThue(string MaLuot)
{
    for (vector<LuotThue>::iterator it = this->DanhSachLuotThue.begin(); it != this->DanhSachLuotThue.end(); ++it)
    {
        if (it->GetMaLuot() == MaLuot)
        {
            return it;
        }
    }
    return this->DanhSachLuotThue.end();
}

void QuanLy::HienThiDanhSachPhong()
{
    this->KhachSanABC.HienThi();
}
void QuanLy::HienThiDanhSachKhachHang()
{

    string context = "DANH SACH KHACH HANG";
    int len = context.length();
    cout << setw((100 - len) / 2 + len) << setfill('_') << right
         << context
         << setw((100 - len) / 2) << setfill('_') << right << "" << endl;
    cout << setw(20) << setfill(' ') << left << "Ho va Ten"
         << setw(10) << setfill(' ') << left << "Tuoi"
         << setw(20) << setfill(' ') << left << "CCCD"
         << endl;
    for (Nguoi &KhachHang : this->DanhSachKhachHang)
    {
        cout << setw(20) << setfill(' ') << left << KhachHang.GetHoTen()
             << setw(10) << setfill(' ') << left << KhachHang.GetTuoi()
             << setw(20) << setfill(' ') << left << KhachHang.GetCCCD()
             << endl;
    }
}

void QuanLy::HienThiDanhSachLuotThue()
{
    string context = "DANH SACH LUOT THUE";
    int len = context.length();
    cout << setw((100 - len) / 2 + len) << setfill('_') << right
         << context
         << setw((100 - len) / 2) << setfill('_') << right << "" << endl;
    cout << setw(20) << setfill(' ') << left << "Ho va Ten"
         << setw(10) << setfill(' ') << left << "Phong"
         << setw(30) << setfill(' ') << left << "MaLuot"
         << setw(20) << setfill(' ') << left << "Ngay thue"
         << setw(20) << setfill(' ') << left << "Ngay tra"
         << setw(20) << setfill(' ') << left << "Thanh Toan"
         << endl;
    for (LuotThue &LuotThue : this->DanhSachLuotThue)
    {
        cout << setw(20) << setfill(' ') << left << LuotThue.GetKhachHang().GetHoTen()
             << setw(10) << setfill(' ') << left << LuotThue.GetPhongThue().GetMaSoPhong()
             << setw(30) << setfill(' ') << left << LuotThue.GetMaLuot()
             << setw(20) << setfill(' ') << left << LuotThue.GetThoiDiemTao()
             << setw(20) << setfill(' ') << left << LuotThue.GetThoiDiemTra()
             << setw(20) << setfill(' ') << left << (LuotThue.GetThanhToan() == CHUA_THANH_TOAN ? "Chua Thanh Toan" : (LuotThue.GetThanhToan() == CHUYEN_KHOAN ? "Chuyen khoan" : "Tien mat"))
             << endl;
    }
}

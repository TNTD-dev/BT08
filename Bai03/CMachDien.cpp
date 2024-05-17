#include "CMachDien.h"
#include "CMachDienNoiTiep.h"
#include"CMachDienSongSong.h"
void CMachDien::Nhap()
{
    cout << "-Nhap so luong mach dien: ";
    cin >> SoLuong;
    for (int i = 0; i < SoLuong; i++) {
        cout << "-Nhap mach thu " << i + 1 << ":\n";
        cout << "-Nhap loai mach dien (0.Mach noi tiep, 1.Mach song song): ";
        int loai;
        cin >> loai;
        if (loai == 0) DanhSach[i] = new CMachDienNoiTiep;
        else DanhSach[i] = new CMachDienSongSong;
        
        DanhSach[i]->Nhap();
    }
}

void CMachDien::Xuat()
{
    cout << "-Danh sach mach dien:\n";
    for (int i = 0; i < SoLuong; i++) {
        DanhSach[i]->Xuat();
    }
}

double CMachDien::TinhDienTro()
{
    return 0;
}

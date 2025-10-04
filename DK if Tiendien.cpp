#include <iostream>
#include <iomanip>
using namespace std;

double tinhTienDien(int soDien) {
    double tien = 0;
    if (soDien <= 50)
        tien = soDien * 600;
    else if (soDien <= 100)
        tien = 50 * 600 + (soDien - 50) * 1004;
    else if (soDien <= 150)
        tien = 50 * 600 + 50 * 1004 + (soDien - 100) * 1214;
    else if (soDien <= 200)
        tien = 50 * 600 + 50 * 1004 + 50 * 1214 + (soDien - 150) * 1594;
    else if (soDien <= 300)
        tien = 50 * 600 + 50 * 1004 + 50 * 1214 + 50 * 1594 + (soDien - 200) * 1722;
    else if (soDien <= 400)
        tien = 50 * 600 + 50 * 1004 + 50 * 1214 + 50 * 1594 + 100 * 1722 + (soDien - 300) * 1844;
    else
        tien = 50 * 600 + 50 * 1004 + 50 * 1214 + 50 * 1594 + 100 * 1722 + 100 * 1844 + (soDien - 400) * 1890;
    
    return tien;
}

int main() {
    string hoTen, diaChi;
    int chiSoCu, chiSoMoi;
    
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);
    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
    cout << "Nhap chi so cu: ";
    cin >> chiSoCu;
    cout << "Nhap chi so moi: ";
    cin >> chiSoMoi;

    int soDien = chiSoMoi - chiSoCu;
    double thanhTien = tinhTienDien(soDien);
    double VAT = thanhTien * 0.10;
    double tongTien = thanhTien + VAT;

    cout << fixed << setprecision(2);
    cout << "\nONG/BA: " << hoTen << endl;
    cout << "DIA CHI: " << diaChi << endl;
    cout << "CHI SO CU: " << chiSoCu << endl;
    cout << "CHI SO MOI: " << chiSoMoi << endl;
    cout << "SO DIEN: " << soDien << " kWh" << endl;
    cout << "THANH TIEN: " << thanhTien << " VND" << endl;
    cout << "VAT (10%): " << VAT << " VND" << endl;
    cout << "TONG TIEN PHAI TRA: " << tongTien << " VND" << endl;

    return 0;
}

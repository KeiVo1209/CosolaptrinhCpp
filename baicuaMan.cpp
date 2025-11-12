#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout << "Nhap n (so co 3 chu so): ";
        cin >> n;
        if (n >= 100 && n <= 999) {
            cout << "n hop le\n";}
        else {
            cout << "n khong hop le, vui long nhap lai!\n";}
    } while (n < 100 || n > 999);
    int dv = n % 10, c = (n / 10) % 10,t= n / 100;
    cout << "Hang don vi: " << dv << "\n";
    cout << "Hang chuc: " << c << "\n";
    cout << "Hang tram: " << t << "\n";
    cout << "So dao nguoc: " << dv * 100 + c * 10 + t << "\n";
    return 0;
}

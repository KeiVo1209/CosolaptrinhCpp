#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Nhap n (>= 1000): ";
        cin >> n;
        if (n >= 1000) {
            cout << "n hop le\n";
        } else {
            cout << "n khong hop le, vui long nhap lai!\n";
        }
    } while (n < 1000);

    int ht   = n / 200;  // số tờ 200
    n        = n % 200;  //số tiền còn lại sau quy đổi tờ 200
    int tram = n / 100;  // số tờ 100
    n        = n % 100;  //số tiền còn lại sau quy đổi tờ 100
    int nm   = n / 50;   // số tờ 50
    n        = n % 50;   //số tiền còn lại sau quy đổi tờ 50
    int ten  = n / 10;   // số tờ 10
    n        = n % 10;   // số tờ 1 còn lại

    cout << "So to tien 200,100,50,10,1 lan luot la: "
         << ht << " , " << tram << " , " << nm << " , " << ten << " , " << n << "\n";

    return 0;
}

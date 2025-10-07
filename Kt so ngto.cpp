#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, cana, b = 1;
    cout << "Nhap so can kiem tra:" << endl;
    cin >> a;
    if (a < 2) {
        cout << a << " khong phai so nguyen to";
        return 0;
    }
    cana = sqrt(a);
    for (int i = 2; i <= cana; i++) {
        if (a % i == 0) {
            b = 0;
            break; // thoát vòng lặp nếu tìm thấy ước số
        }
    }
    if (b == 1) {
        cout << a << " la so nguyen to";
    } else {
        cout << a << " khong phai so nguyen to";
    }
    return 0;
}

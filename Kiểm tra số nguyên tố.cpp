#include <iostream>
using namespace std;

bool ktrant(int n) {//hàm đúng sai (ép hàm int cũng được, đặt 0=false, 1=true)
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a;
    cout << "Nhap so can kiem tra: ";
    cin >> a;

    if (ktrant(a)) { //điều kiện ktrant(a)==true
        cout << a << " la so nguyen to\n";
    } else {
        cout << a << " khong phai so nguyen to\n";
    }

    return 0;
}

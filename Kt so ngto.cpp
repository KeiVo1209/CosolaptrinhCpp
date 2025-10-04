#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, cana, b;
    cout << "Nhap so can kiem tra:"<<endl;
    cin >> a;
    if (a < 2) { cout << a << " khong phai so nguyen to"; return 0; }
    cana = sqrt(a);
    for (int i = 2; i <= cana; i++) {
        if (a % i == 0) { b = 0; }
        else b = 1;
    }
    if (b == 1) { cout << a << " la so ngto"; }
    else cout << a << " khong phai so nguyen to";
    return 0;
}

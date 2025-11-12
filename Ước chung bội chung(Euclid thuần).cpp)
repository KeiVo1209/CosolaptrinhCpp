#include <iostream>
using namespace std;

// Hàm tìm UCLN bằng thuật toán Euclid
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int a, b;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;
    cout << "Uoc chung lon nhat giua " << a << " va " << b << " la: " << gcd(a, b) << "\n";
    cout << "Boi chung nho nhat giua " << a << " va " << b << " la: " <<(a / gcd(a, b)) * b << "\n";

    return 0;
}

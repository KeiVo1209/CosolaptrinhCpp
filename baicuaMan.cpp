#include <iostream>
using namespace std;

int main() {
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n >= 100 || n <= 999) {
			cout << "n hop le ";
		}
		else cout << " n ko hop le ";
	} while (n < 100 || n>999);
	int dv, t, c;
	dv = n % 10;
	t = n / 100;
	c = (n / 10) % 10;
	cout << "Hang don vi: " << dv;
	cout << "Hang chuc " << c;
	cout << "hang tram:"<< t;
	cout <<"\n"<<dv * 100 + c * 10 + t;
}

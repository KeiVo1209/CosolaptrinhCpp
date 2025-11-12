#include <iostream>
using namespace std;

int main() {
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n > 1000) {
			cout << "n hop le ";
		}
		else cout << " n ko hop le ";
	} while (n <= 1000);
	int ten{}, nm, tram, ht;
	ht = n / 200;
	n = n - ht * 200;
	tram = n / 100;
	n = n - tram * 100;
	nm = n / 50;
	n = n - nm * 50;
	ten = ten / 10;
	n = n - ten * 10;
	cout << "so to tien 200,100,50,10,1 lll " << ht << " ," << tram << " ," << nm << " ," << ten << " ," << n;


}

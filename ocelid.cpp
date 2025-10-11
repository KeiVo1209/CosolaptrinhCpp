#include <iostream>
using namespace std;
int main() {
	int a, b,a1,b1;
	cout << "Nhap so nguyen a\n";
	cin >> a;
	a1 = a;
	cout << "Nhap so nguyen b\n";
	cin >> b;
	b1 = b;
	if (a == b) { cout << "Ucl:" << a; }
	else 
	    while ( a!= b)
	     {
			if (a > b) a = a - b;
			else b = b - a;
	     }
	int i = min(a, b);
	cout << "Uoc chung lon nhat giua " << a << " va " << b << " la: " <<  i<< "\n";
	cout << "Boi chung nho nhat giua " << a << " va " << b << " la: " << (a1*b1) / i;
}


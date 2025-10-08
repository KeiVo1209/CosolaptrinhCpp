#include <iostream>
using namespace std;
int main() {
	int a, b,Bcnn = 0, max, min, sd,m1,m2;
	cout << "Nhap so nguyen a\n";
	cin >> a;
	max = a; m1 = a;
	cout << "Nhap so nguyen b\n";
	cin >> b;
	min = b; m2 = b;
	if (max < b) { max=m1 = b; min =m2= a; }
	sd = max % min;
	while (sd != 0)
	{
		max = min;
		min = sd;
		sd = max % min;
	}
	cout << "Uoc chung lon nhat giua " << a << " va " << b << " la: " << min<<"\n";
	cout << "Boi chung nho nhat giua " << a << " va " << b << " la: " << (m1*m2)/min;
}



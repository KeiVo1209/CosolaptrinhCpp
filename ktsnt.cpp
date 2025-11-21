// ontap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int n,r=1;
	cin >> n;
	if (n < 2) {
		cout << "Ko phai nto"; return 0;
	}
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			r = 0; break;
		}
	}
	if (r == 0) cout << "Ko phai nto";
	else cout << "La so nto";


}

// ontap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	while (a != b) //điều kiện vòng lặp là a khác b, khi end là a=b
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	//Khi a=b, ước chung lớn nhất của a và b là chính nó 
	cout << "Uoc chung lon nhat la: " << a;

}

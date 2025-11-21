// ontap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a,giay,phut,gio;
    do {
        cout << "Nhap so nguyen duong: ";
        cin >> a;
    } while (a <= 0);
    giay = a;
    gio = a / 3600;
    giay = a % 60;
    phut = (a- (gio*3600)-giay) / 60;
    cout << gio << "gio " << phut << "phut " << giay << "giay";
}

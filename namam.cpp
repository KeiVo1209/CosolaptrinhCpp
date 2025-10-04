#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, b, c;
    string kq;
    cin >> n;
    b = n % 10;
    c = n % 12;
    switch (b)
    {
    case 0: kq = "Canh"; break;
    case 1: kq = "Tan"; break;
    case 2: kq = "Nham"; break;
    case 3: kq = "Quy"; break;
    case 4: kq = "Giap"; break;
    case 5: kq = "At"; break;
    case 6: kq = "Binh"; break;
    case 7: kq = "Dinh"; break;
    case 8: kq = "Mau"; break;
    case 9: kq = "Ky"; break;
    }
    kq += " ";
    switch (c+1)
    {
    case 1: kq += "Than"; break;
    case 2: kq += "Dau"; break;
    case 3: kq += "Tuat"; break;
    case 4: kq += "Hoi"; break;
    case 5: kq += "Ty"; break;
    case 6: kq += "Suu"; break;
    case 7: kq += "Dan"; break;
    case 8: kq += "Meo"; break;
    case 9: kq += "Thin"; break;
    case 10: kq += "Ty"; break;
    case 11: kq += "Ngo"; break;
    case 12: kq += "Mui"; break;
    }
    cout << kq;
    return 0;
}

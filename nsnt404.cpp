#include <iostream>
#include <cmath>
using namespace std;
bool kt(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return 0;
            else return 1;
    }
}

    int main() {
        int a, b, N;
        cout << "Nhap n so nguyen to can tim:" << endl;
        cin >> N;
        a = 0;
        while (a <= N) {
            if (kt(a))
            {
                cout << a; a++;
            } else a++;
   
        }
        return 0;
    }

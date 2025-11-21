#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "Ko phai nto";
        return 0;
    }

    bool kt = true;
    int cann = sqrt(n);

    for (int i = 2; i <= cann; i++) {
        if (n % i == 0) {
            kt = false;
            break;
        }
    }

    if (kt) cout <<n<< " La so nto";
    else cout <<n<< " Ko phai nto";

    return 0;
}

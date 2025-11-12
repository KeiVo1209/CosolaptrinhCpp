#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 2;
    double result;

    // Nếu không ép kiểu: chia nguyên
    result = a / b;  
    cout << "a / b = " << result << endl; // Kết quả: 2

    // Dùng static_cast để ép kiểu
    result = static_cast<double>(a) / b;
    cout << "a / b (ép kiểu) = " << result << endl; // Kết quả: 2.5

    return 0;
}




#include<iostream>

using namespace std;

int main() {
    int n, x=0;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {//vlap chạy từ i đên pt cuối cùng( so sánh i vs i+1) 
            if (a[i] > a[j]) {
                x = a[i];//lưu giá trị lớn ban đầu 
                a[i] = a[j];//đổi vị trí
                a[j] = x;//đổi vị trí 
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";// xuất từng pt mảng 
    }
    return 0;
}


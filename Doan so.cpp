
#include <iostream>
#include <string>
using namespace std;
int m1[] = { 1,3,5,7,9 };
int m2[] = { 2,3,6,7,10 };
int m3[] = { 4,5,6,7 };
int m4[] = { 8,9,10 };
int V(int a[], int n, string b) {
    char huy;
    cout << b;
    for (int i = 0; i < n; i++)
        cout << a[i]<<" ";
    cout << "khong? (c/k) ";
    cin >> huy;
    if (huy == 'c' || huy == 'C')
        return a[0];
    else return 0;
}

int main()
{
    int da = 0;
    int m1[] = { 1,3,5,7,9 };
    int m2[] = { 2,3,6,7,10 };
    int m3[] = { 4,5,6,7 };
    int m4[] = { 8,9,10 };
    string out = "So ban dang nghi co trong day ";
    da += V(m1, size(m1), out);
    da += V(m2, size(m2), out);
    da += V(m3, size(m3), out);
    da += V(m4, size(m4), out);
    cout << "So ban chon la "<< da;
}


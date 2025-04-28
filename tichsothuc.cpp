#include <iostream>
using namespace std;

int main(){
    double a, b, c;
    cout << "Nhập số thứ nhất (a): ";
    cin >> a;
    cout << "Nhập số thứ hai (b): ";
    cin >> b;
    cout << "Nhập số thứ ba (c): ";
    cin >> c;
    double product = a * b * c;
    cout << "Tích của ba số là: " << product << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "整数a: ";
    cin >> a;

    cout << "整数b: ";
    cin >> b;

    cout << "二つの整数の差は" << (a < b ? b - a : a - b) << "です。\n";
}

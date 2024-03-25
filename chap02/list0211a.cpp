#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "整数a: ";
    cin >> a;

    cout << "整数b: ";
    cin >> b;

    cout << "小さい方の値は" << (a < b ? a : b) << "です。\n";
}

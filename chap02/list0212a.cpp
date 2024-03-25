#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;

    cout << "整数a: ";
    cin >> a;

    cout << "整数b: ";
    cin >> b;

    cout << "整数c: ";
    cin >> c;

    cout << "最大値は" << max(a, max(b, c)) << "です。\n";
}

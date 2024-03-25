// 標準関数を使って二つの整数の差を求める
// cstdlibのabsを使う（絶対値を求めることができる）

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;

    cout << "整数a: ";
    cin >> a;

    cout << "整数b: ";
    cin >> b;

    cout << "二つの整数の差は" << abs(a - b) << "です。\n";
}

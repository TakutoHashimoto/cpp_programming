// 二つの値を降順にソート

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "整数a: ";
    cin >> a;

    cout << "整数b: ";
    cin >> b;

    if (a == b) {
        cout << "二つの値は同じです。\n";
    } else {
        if (a < b) {
            int t = a;
            a = b;
            b = t;
        }

        cout << "a <= bとなるようにソートしました。\n";
        cout << "変数a: " << a << "です。\n";
        cout << "変数b: " << b << "です。\n";
    }
}

#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "年を入力せよ: ";
    cin >> year;

    cout << "その年は閏年";

    if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) {
        cout << "です。\n";
    } else {
        cout << "ではありません。\n";
    }
}

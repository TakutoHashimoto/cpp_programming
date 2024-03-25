#include <iostream>

using namespace std;

int main()
{
    int month;

    cout << "季節を求めます。\n";
    cout << "いま何月ですか: ";
    cin >> month;

    if (1 <= month && month <= 12) {
        if (3 <= month && month <= 5) {
            cout << month <<  "月は春です。\n";
        } else if (6 <= month && month <= 9) {
            cout << month <<  "月は夏です。\n";
        } else if (10 <= month && month <= 11) {
            cout << month <<  "月は秋です。\n";
        } else if (month == 12 || month == 1 || month == 2) {
            cout << month <<  "月は冬です。\n";
        }
    } else {
        cout << month << "月は存在しません。\n";
    }
}

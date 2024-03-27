#include <iostream>

using namespace std;

int main()
{
    string retry;

    do {
        int month;

        cout << "季節を求めます。\nいま何月ですか: ";
        cin >> month;

        if (3 <= month && month <= 5) {
            cout << "それは春です。\n";
        } else if (6 <= month && month <= 8) {
            cout << "それは夏です。\n";
        } else if (9 <= month && month <= 11) {
            cout << "それは秋です。\n";
        } else if (month == 12 || month == 1 || month == 2) {
            cout << "それは冬です。\n";
        } else {
            cout << "\aそんな月はありません。\n";
        }

        cout << "もう一度？ Y...Yes / N...No: ";
        cin >> retry;
    } while (retry == "Y" || retry == "y");
}

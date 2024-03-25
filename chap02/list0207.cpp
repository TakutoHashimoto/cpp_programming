#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "整数値: ";
    cin >> n;

    if (n == 0) {
        cout << "その値は0です。\n";
    } else if (-9 <= n && n <= 9) {
        cout << "その値は1桁です。\n";
    } else {
        cout << "その値は2桁以上です。\n";
    }
}

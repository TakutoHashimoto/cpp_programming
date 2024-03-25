#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "整数値: ";
    cin >> n;

    if (n <= -10 || 10 <= n) {
        cout << "その値は2桁以上です。\n";
    } else {
        cout << "その値は2桁未満です。\n";
    }
}

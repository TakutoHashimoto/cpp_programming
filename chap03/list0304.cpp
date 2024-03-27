#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "カウントダウンします。\n";

    // 入力を受け取る。0以下の場合は再入力。
    do {
        cout << "正の整数を入力: ";
        cin >> x;

        if (x <= 0) {
            cout << "0以下の数値が入力されました。\n";
        }
    } while (x <= 0);

    while (x >= 0) {
        cout << x << "\n";
        x--;
    }
}

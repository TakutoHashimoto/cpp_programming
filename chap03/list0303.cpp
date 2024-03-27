#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));

    int no = rand() % 100;
    int x;

    cout << "数当てゲーム開始!!\n";
    cout << "0~99の数を当ててください。\n";

    do {
        cout << "いくつかな: ";
        cin >> x;

        if (x > no) {
            cout << "\a" << x << "より小さいです。\n";
        } else if (x < no) {
            cout << "\a" << x << "より大きいです。\n";
        }
    } while (x != no);

    cout << "正解です。\n";
}

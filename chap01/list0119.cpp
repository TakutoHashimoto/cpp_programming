#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "お名前は: ";
    getline(cin, name);

    cout << "こんにちは" << name << "さん。\n";
}

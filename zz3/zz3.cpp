using namespace std;
#include <iostream>
#include <cstdio>

int main()
{
    setlocale(0, "");
    cout << "Введите строчку: " << endl;
    string str = "", strnew = "";
    cin >> str;
    cout << "Измененная строчка: " << endl;
    for (int a = 0; a < str.length(); a++)
    {
        if (isalpha(str[a]))
        {
            strnew += str[a];
        }
    }
    str = strnew;
    cout << str << endl;
}
using namespace std;
#include <iostream>
int main()
{
    setlocale(0, "");
    char* b = new char[256]{ 'а', 'o', 'e', 'u', 'i', 'y','A', 'O', 'E', 'U', 'I', 'Y' };
    cout << "Введите строку: " << endl;
    string str = "";
    cin >> str;
    int count = 0;
    cout << "Количество гласных букв: " << endl;
    for (int a = 0; a < str.length(); a++)
    {
        for (int c = 0; c < 26; c++)
        {
            if (str[a] == b[c])
            {
                count++;
            }
        }
    }
    cout << count;
}
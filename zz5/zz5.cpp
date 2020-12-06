using namespace std;
#include <iostream>
int main()
{
    setlocale(0, "");
    char* b = new char[256]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    cout << "Введите строку: " << endl;
    string str = "";
    cin >> str;
    int count = 0;
    cout << "Количество прописных английских букв: " << endl;
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
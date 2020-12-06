using namespace std;
#include <iostream>

int main()
{
    setlocale(0, "");
    string S = "", S0 = "";
    cin >> S;
    cin >> S0;
    int count = 0;
    cout << "Количество вхождений: " << endl;
    for (int a = 0; a < S.length(); a++)
    {
        string str = S.substr(a);
        if (str.find(S0, a) < INT_MAX)
        {
            a = str.find(S0, a);
            count++;
        }
    }
    cout << count;
}
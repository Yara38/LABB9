using namespace std;
#include <iostream>

int findCountInStr(string c, char symbol)
{
	int count = 0;
	for (int a = 0; a < c.length(); a++)
	{
		if (c[a] == symbol)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	setlocale(0, "");
	cout << "Введите строчку: " << endl;
	string c = "";
	cin >> c;
	cout << "Введите символ: " << endl;
	char symbol = '0';
	cin >> symbol;
	int count = findCountInStr(c, symbol);
	cout << "Всего символов " << symbol << " в строке " << c << " = " << count;
}
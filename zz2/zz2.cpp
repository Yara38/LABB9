using namespace std;
#include <iostream>

int main()
{
	setlocale(0, "");
	cout << "Введите строчку: " << endl;
	string с = "";
	cin >> с;
	cout << "Введите символ, который нужно заменить: " << endl;
	string b;
	cin >> b;
	int a = с.find(b);
	с.replace(a, 1, "9"); 
	cout << с;
}
#include <iostream>
#include <Windows.h>
using namespace std;

int Sum(int a, int b)
{
	cout << "Funcion suma es ejecutado" << endl;
	int c;
	c = a + b;
	return c;
}

void WelcomeMessage()
{
	cout << "Welcome to our program" << endl;
}

void StartProgram(string filename)
{
	ShellExecute(NULL, "open", filename.c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main()
{
	WelcomeMessage();
	int  x, y;
	cin >> x;
	cin >> y;
	cout << Sum(x, y) << endl;
	system("pause");
	StartProgram("mspaint");
	return 0;
}
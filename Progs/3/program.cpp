#include <iostream>

using namespace std;

int main ()
{
	int x;
	system("chcp 1251");
	cout << "¬ведите число: " ;
	cin >> x;
	x=x/10;
	x=x%10;
	cout << "x=" << x << "\n";
	system("pause");
}


#include <iostream>

using namespace std;

int main ()
{
	int a=0;
	int i;
	system("chcp 1251");
	while(a<99)
	{
		cout << "¬ведите число:" << endl;
	    cin >> a;
		i=a*a;
		cout<< i << endl;
	}
	system("pause");
}

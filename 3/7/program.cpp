#include <iostream>

using namespace std;

int main ( int argc, char** args )
{
	int a;
	cin >> a;
	try
	{
		if(a==0)throw "Division by zero!\n";
		cout << 4 / a << endl;
	}
	catch(char const* e)
	{
		cout << e;
	}
	
	
	return 0;
}
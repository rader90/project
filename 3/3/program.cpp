#include <iostream>

using namespace std;

enum constant_set
{
	csConstant1 = 5,
	csConstant2 = 4,
	csConstant3 = 3,
	csConstant4 = 2,
	csConstant5 = 1,
	csConstant6 = 0
}c_set;

int main ( int argc, char** args )
{
	int a;
	cout << "Enter num: ";
	cin >> a;
	switch(a)
	{
		case csConstant1:
		case csConstant2:
		case csConstant3:
			cout << "Constant 1 2 3" << endl;
			break;
		case csConstant4:
		case csConstant5:
		case csConstant6:
			cout << "Constant 4 5 6" << endl;
			break;
		default:
			cout << "No num" << endl;
			break;
	}
	
	return 0;
}
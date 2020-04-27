#include <iostream>

using namespace std;

int main ( int argc, char** args )
{
	int a;
	cout << "Enter num > 3: ";
	cin >> a;
	if (a<3){
		cout << "Enter num > 3: ";
		cin >>a;
		
	}else
		do{
			cout << a << endl;
			a= a-1;
		}while (a>0);
	
	return 0;
}
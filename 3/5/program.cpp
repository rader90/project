#include <iostream>

using namespace std;



int main ( int argc, char** args )
{
	int a;
	int b;
	cout << "Enter num palochek 10-30: ";
	cin >>a;
	while((a<10) || (a>30)){
		cout << "Enter num palochek 10-30: ";
		cin >>a;
	};
	do{
		cout << a << endl;
		if (a == 1){
		cout << "GameOwner"<<endl;	
		break;
		};
		cout << "Enter num 1,2,3:";
		cin >>b;
		while((b>3) || (b<1)){
			cout << "Enter num povtorno 1,2,3:";
			cin >>b;
		};
		a=a-b;
		if (a<=0){
			cout << "Palochek num > 0, ERROR!!!"<< endl;
		};
	}while (a > 0);
	system("pause");
	return 0;
}


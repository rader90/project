// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,c;
	for(;;){
		cout << "������� ���� ����� 1 = \"+\" 2 = \"*\" 3 = \"/\": ";
		cin >> a;
		cout << "������� ����o b: ";
		cin >> b;
		cout << "������� ����o c: ";
		cin >> c;
		switch(a){
			case 1: cout << b+c << endl;
				break;
			case 2: cout << b*c << endl;
				break;
			case 3: if(c!=0){
				cout << b/c; 
				break;
			}else{
				cout << "c=0 b\c ERROR" << endl;
			};
				break;
			default:cout << "������� ���� ����� 1 = \"+\" 2 = \"*\" 3 = \"/\": ";
				break;
		};
		cin.clear();
		cin.ignore(32767,'\n'); 
	};
	system("pause");
	return 0;
}

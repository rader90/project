#include <iostream>

using namespace std;

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int a;
	cout << "������� �����: " ;
	cin >> a; 
	if(!(a%2) && a>5){
		cout << "1"<<endl;
	}else{
		cout << "0"<<endl;
	}
	
	system("pause");
	return 0;
}


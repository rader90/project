#include <iostream>

using namespace std;

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int a,b;
	cout << "������� �����: " ;
	cin >> a; 
	b=a%2;
	if(b>0){
		cout << "0"<<endl;
	}else{
		cout << "1"<<endl;
	}
	
	system("pause");
	return 0;
}


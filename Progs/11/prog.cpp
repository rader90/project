#include <iostream>

using namespace std;

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int x;
	cout << "������� �����: " ;
	cin >> x; 
	if(x>=5){
		x=10;
	}else{
		x=0;
	}
	cout << x <<endl;
	system("pause");
	return 0;
}


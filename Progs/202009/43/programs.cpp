// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,i;
	a=8;
	cout << "������� �����: ";
	cin >> a;
	for(i=0; i<a;++i){
		cout << "8 ";
	};
	system("pause");
	return 0;
}

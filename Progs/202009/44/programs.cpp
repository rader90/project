// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,i;
	a=8;
	cout << "������� ����� ���������� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	for(i=0; i<a;++i){
		cout << b << " ";
	};
	system("pause");
	return 0;
}

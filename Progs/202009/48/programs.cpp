// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,i;
	b=2;
	cout << "������� ����� a: ";
	cin >> a;
	for(i=0; i<a;++i){
		cout << b << " ";
		b+=2;
	};
	system("pause");
	return 0;
}

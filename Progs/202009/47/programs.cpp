// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,i;
	cout << "������� ����� i: ";
	cin >> i;
	for(i; i>=0;--i){
		cout << i << " ";
	};
	system("pause");
	return 0;
}

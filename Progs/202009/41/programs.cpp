// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int i=0;
	while(i<7){
		cout << i ;
		i+=2;
	};
	system("pause");
	return 0;
}

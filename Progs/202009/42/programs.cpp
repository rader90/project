// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int i=5;
	while(i>0){
		cout << i ;
		--i;
	};
	system("pause");
	return 0;
}

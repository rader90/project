// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,i;
	cout << "������� ����� a: ";
    cin >> a;
	for(i=0;i<a;++i){
		cout << i*i << " ";
	};
	system("pause");
	return 0;
}

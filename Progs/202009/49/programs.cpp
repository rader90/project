// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int n,i;
	cout << "������� ����� n>=2: ";
    cin >> n;
	if(n>=2){
	for(i=2; n>=i;i+=2){
		cout << i << " ";
		};
	};
	system("pause");
	return 0;
}

// ����������� ����������� ���������� �����-������
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// ����������� ������������ ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int i,j,a,b;
	cout << "������� ������ a : ";
	cin >> a;
	cout << "������� ������ b : ";
	cin >> b;
	for(i=0;i<a;++i){
		cout << "\n";
		for(j=0;j<b;++j){
		cout << "*";
		};
	};
	cout << endl;
	system("pause");
	return 0;
}

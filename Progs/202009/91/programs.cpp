// ����������� ����������� ���������� �����-������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,i;
	const int n=6;
	int mas[n];
	for(i=0;i<n;++i){
		cout << "������� ����� ����� ��� ���������� ������� : ";
		cin >> a;
		mas[i]=a;
	};
	for(i=0;i<n;++i){
		cout << mas[i] << " ";
	};
	cout << endl;
	for(i=1,a=mas[0];i<n;++i){
		if(a>mas[i]){
			a=mas[i];
			b=i;
		}
	};
	cout << "a = " << a << " i = " << b <<endl;
	system("pause");
	return 0;
}


// ����������� ����������� ���������� �����-������
#include <iostream>
#include <cmath>
// ����������� ������������ ���� std
using namespace std;

int main(void){
	// ����� ��������� cp1251
	system("chcp 1251 > null");
	// ���������� ����������
	int a,b,i,x,s;
	const int n=5;
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
	for(s=i=1,a=mas[0];i<n;++i){
		if(a!=mas[i]){
			s=0;
			break;
		}
	};
	cout << "s = " << s <<endl;
	system("pause");
	return 0;
}

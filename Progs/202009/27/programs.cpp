// ����������� ����������� ���������� �����-�������
#include <iostream>

// ����������� ������������ ���� std
using namespace std;

int pl(double a, double b);

int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	double a,b;
	int c;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������� ��������: ";
	cin >> b;
	c=pl(a,b);
	cout << c << endl;	
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 
int pl(double a, double b){
	int c,d;
	c=3.14*a*a;
	d=b*b;
	if(c>d){
		b=1;
	}else if(d>c){
		b=2;
	}else{
		b=0;
	}
	return b;
}

#include <iostream>

using namespace std;

float chislo(int a);

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int a;
	float b;
	cout << "������� �����: ";
	cin >> a;
	b = chislo(a);
	cout <<b << endl;
	system("pause");
	return 0;
}
// ������� ����� ������������ �����
float chislo(int a)
{
	int b,c,d,e;
	float f,l;
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	e=a/1000%10;
	f=(float)(b+c+d+e)/4;
	return f;
}

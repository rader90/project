#include <iostream>

using namespace std;

int chislo(int a);

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int a;
	cout << "������� �����: ";
	cin >> a;
	a = chislo(a);
	cout << a << endl;
	system("pause");
	return 0;
}
// ������� ����� ������������ �����
int chislo(int a)
{
	int b,c,d;
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	a=b+c+d;
	return a;
}

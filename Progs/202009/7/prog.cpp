#include <iostream>

using namespace std;

int chislo(int a, int b, int c);

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int a;
	int b;
	int c;
	cout << "������� ����� 1: ";
	cin >> a;
	cout << "������� ����� 2: ";
	cin >> b;
	cout << "������� ����� 3: ";
	cin >> c;
	c = chislo(a, b, c);
	cout << c << endl;
	system("pause");
	return 0;
}
// ������� 
int chislo(int a, int b, int c)
{
	int f;
	f=a*100+b*10+c;
	return f;
}

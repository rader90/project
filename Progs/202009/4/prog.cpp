#include <iostream>

using namespace std;

void time(int a, int b);

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int a;
	int b;
	cout << "���� ���������������� �++ ������ � ��������� ����� 2 ���������� 7" << endl;
	cout << "Enter the number of hours: ";
	cin >> a;
	cout <<"Enter the number of minutes: ";
	cin >> b;
	time(a, b);
	system("pause");
	return 0;
}
// ������� ������ �������
void time(int a, int b)
{
	cout << "Time " << a << ":" << b << endl;
}

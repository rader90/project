// ����������� ����������� ���������� �����-������
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// ����������� ������������ ���� std
using namespace std;
void add(double x, double y, double &c);

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    double a,b,c;
    cout << "������� ������ a : ";
    cin >> a;
    cout << "������� ������ b : ";
    cin >> b;
	cout << a << " + " << b << " = ";
	add(a,b,c);
	cout << c << endl;
    system("pause");
    return 0;
}
void add(double x, double y, double &c){
	c=x+y;
}

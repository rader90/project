// ����������� ����������� ���������� �����-������
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// ����������� ������������ ���� std
using namespace std;
void swap(int &x, int &y);

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c;
    cout << "������� ������ a : ";
    cin >> a;
    cout << "������� ������ b : ";
    cin >> b;
	cout << a << " " << b << endl;
	swap(a,b);
	cout << a << " " << b << endl;
    system("pause");
    return 0;
}
void swap(int &x, int &y){
	int a;
	a=x;
	x=y;
	y=a;
}

// ����������� ����������� ���������� �����-������
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// ����������� ������������ ���� std
using namespace std;
void swap(int x, int y);

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b;
    cout << "������� ������ a : ";
    cin >> a;
    cout << "������� ������ b : ";
    cin >> b;
    swap(a,b);
    system("pause");
    return 0;
}
void swap(int x, int y){
	cout << x << " " << y << endl;
}

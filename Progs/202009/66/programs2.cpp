// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,d,i;
    cout << "������� ����� a: ";
   	cin >> a;
	do{
		b=a%10;
		cout << b << " ";
		a/=10;
	}while(a);
	system("pause");
    return 0;
}
  

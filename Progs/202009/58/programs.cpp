// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,i;
    b=0;
    cout << "������� ����� a: ";
   	cin >> a;
    for(i=1;i<=a;++i){
   		if(a==i*i){
   				b=1;
		   };
    };
    cout << b <<endl;
	system("pause");
    return 0;
}

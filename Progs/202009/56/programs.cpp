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
    for(i=1;i<=3;++i){
    	cout << "������� ����� a: ";
   		cin >> a;
   		if(a==2){
   				b=1;
		   };
    };
    cout << b <<endl;
	system("pause");
    return 0;
}

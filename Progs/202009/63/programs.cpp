// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,e,i,l;
    cout << "������� ����� a: ";
   	cin >> a;
    for(b=e=c=i=1,l=0;i<=a;++i){
		if(e==a){
			l=1;
		}
		e=b+c;
		b=c;
		c=e;
    }; 
	cout << l <<endl;
	system("pause");
    return 0;
}
  

// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,e,i;
    cout << "������� ����� a: ";
   	cin >> a;
    for(e=c=i=1,b=0;i<=a;++i){
		cout << e << " ";
		e=b+c;
		b=c;
		c=e;
		
    }; 
	system("pause");
    return 0;
}
  

// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,i,e,j;
	c=0;
    cout << "������� ����� a: ";
   	cin >> a;
    for(i=1;i<=a;++i){
		for(e=j=1;j<=i;++j){
			e=e*j;
		}
		c=c+e;
    }; 
    cout << c << endl;
	system("pause");
    return 0;
}

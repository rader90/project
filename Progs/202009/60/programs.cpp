// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,i;
    c=2;
    b=0;
    cout << "������� ����� a: ";
   	cin >> a;
    for(i=1;i<=a;++i){
    	b+=2;
    	if(i%2!=0&&i>1){
    		c=c-b;
		}else if(i%2==0&&i>1){
			c=c+b;
		}
    };
    cout << c << endl;
	system("pause");
    return 0;
}

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
	if(a>99&&a<1000){
	b=a/100;
	c=a/10%10;
	d=a%10;
	cout << d << " " << c << " " << b << endl;
	}else if(a>9&&a<100){
		c=a/10;
		d=a%10;
		cout << d << " " << c << endl;
	}
	
	system("pause");
    return 0;
}
  

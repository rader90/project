// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,i;
    cout << "������� ����� a: ";
   	cin >> a;
   	cout << "������� ����� b: ";
   	cin >> b;
   	if(a>b){
   		c=a;
	}else{
	   	c=b;
	};
    for(i=c;i>=1;--i){
		if(a%i==0&&b%i==0){
			cout << i <<endl;
			break;
		};
    };
	system("pause");
    return 0;
}
  

// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,c,i;
	b=1;
    cout << "������� ����� a: ";
   	cin >> a;
	if(a>1){
    for(i=2;i<a;++i){
		if(a%i==0){
			b=0;
			break;
		}else{
			b=1;
		};
    }
	}else{
    	b=0;
	};
	cout << b << endl;
	system("pause");
    return 0;
}
  

// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,i;
    cout << "������� ����� a: ";
    cin >> a;
    for(i=1;i<=a;++i){
        if(i%3==0){
        	cout << "0 ";
		}else{
			cout << "1 ";
		}
        
		
    };
	system("pause");
    return 0;
}

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
    for(b=i=0;i<a;++i){
        ++b;
        cout << b << " ";
		if(b==3){
        	b=0;
		}
    };
	system("pause");
    return 0;
}

// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,i,c;
    c=1;
    double b;
    cout << "������� ����� a: ";
    cin >> a;
    for(i=0;i<a;++i){
    	b=(double)c/(c+1);
    	++c;
        cout << b << " ";
        
    };
	system("pause");
    return 0;
}

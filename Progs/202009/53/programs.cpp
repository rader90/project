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
    for(i=0;i<a;++i){
        if(i%2==0){
			cout << "0 ";
        }else{
			cout << "1 ";
		};
    };
	system("pause");
    return 0;
}
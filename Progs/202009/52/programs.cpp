// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,i;
    do{
    cout << "������� ����� a: ";
    cin >> a;
    cout << "������� ����� b: ";
    cin >> b;
    if(a<=b){
    for(i=1;i<=b;++i){
        if(a<=i){
        cout << i*i << " ";
        };
    };
	}else{
    cout << "������� a<b" << endl;
	};
	}while(a>=b);
    system("pause");
    return 0;
}
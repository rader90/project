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
    cout << "������� ����� i: ";
    cin >> i;
    cout << "������� ����� b: ";
    cin >> b;
    if(a<=b){
    for(i;i<=b;++i){
        
        cout << i*i << " ";
        
    };
	}else{
    cout << "������� a<b" << endl;
	};
	}while(a>=b);
    system("pause");
    return 0;
}
// ����������� ����������� ���������� �����-������
#include <iostream>

// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,i,c;
    cout << "������� ����� a: ";
    cin >> a;
    for(i=1;i<=a;++i){
    	cout.width(2);
    	cout << right << i << " * 3 = " ;
    	cout.width(2);
		cout << right << i*3 << endl; 
        
    };
	system("pause");
    return 0;
}

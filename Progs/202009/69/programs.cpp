// ����������� ����������� ���������� �����-������
#include <iostream>
#include <stdlib.h> 
#include <ctime>
// ���������� ����������� ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,e,c,n,i,j; 
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
	for(j=i=0;;){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		a=rand()%(11)+0;
		b=rand()%(11)+0;
		cout << a << " + " << b << endl;
		cout << "������� ����� n : ";
		cin >> n;
		if(a+b==n){
			cout << "�����" << endl;
			++i;
		}else{
			cout << "�������" << endl;
			++j;
		}
		cout << "������ ������� " << i << " , �������� " << j << endl;
	}
	system("pause");
    return 0;
}
  

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
    int a,b,e,n,i; 
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));		
	cout << "������� ����� a: ";
   	cin >> a;
   	cout << "������� ����� b: ";
   	cin >> b;
   	cout << "������� ����� n: ";
   	cin >> n;
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		e=rand()%(b-a+1)+a;
		cout << e << " " << endl;
	}
	system("pause");
    return 0;
}
  

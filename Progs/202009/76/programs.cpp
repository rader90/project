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
    int a,i,j,c;
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
	// cout << "������� ����� n : ";
	// cin >> n;
	int mas[10];
	for(i=0;i<10;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		c=rand()%6+5;
		mas[i]=c;
	};
	for(j=0;j<10;++j){
		cout << mas[j] << endl;
	};
	system("pause");
    return 0;
}
  

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
	int mas[5];
	mas[0]=5;
	mas[1]=2;
	mas[2]=3;
	mas[3]=5;
	mas[4]=7;
	for(i=0;i<5;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		cout << mas[i] << " ";
	};
	cout << endl;
	for(j=4;j>=0;--j){
		cout << mas[j] << " ";
	};
	system("pause");
    return 0;
}
  

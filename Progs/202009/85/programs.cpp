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
    int i,j=0,m;
	double sum=0,a=0,c=0;
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
	// cout << "������� ����� n : ";
	// cin >> n;
	const int n=14;
	double mas[n];
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		c=rand()%16+5;
		mas[i]=c;
	};
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		cout.setf(ios::left);
		cout.width(5);
		cout << mas[i] << " ";
	};
	cout << endl;
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		cout.setf(ios::left);
		cout.width(5);
		sum=mas[i];
		if(sum<11){
			mas[i]=((sum/100)*15)+sum;
		}
		cout << mas[i] << " ";
	};
	cout << endl;
	system("pause");
    return 0;
}
  

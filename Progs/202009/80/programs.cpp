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
    int a,i,j=0,c=0,sum=0;
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
	// cout << "������� ����� n : ";
	// cin >> n;
	const int n=5;
	int mas[n];
	mas[0]=1;
	mas[1]=-2;
	mas[2]=3;
	mas[3]=0;
	mas[4]=-4;
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		sum=mas[i];
		if(sum>0){
			++j;
		}else if(sum<0){
			++c;
		};
	};
	cout << j << "  " << c << endl;
	system("pause");
    return 0;
}
  

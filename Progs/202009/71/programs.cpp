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
    int a,b,e,n,i,j; 
    double c;
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
	cout << "������� ����� n : ";
	cin >> n;
	for(e=j=i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		a=rand()%6+1;
		cout << "������ ����� " << a;
		++e;
		if(a>=4){
			b=rand()%6+1;
			cout << ", ������ ����� " << b;
			if(b>=4){
			++j;
			};
		};
		cout << endl;
	};
	c=double(j)/double(n);
	cout << "\n" << c*100 << "%" << endl;
	system("pause");
    return 0;
}
  

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
	for(j=e=i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		a=rand()%2;
		cout << a << " ";
		if(a==0){
			++e;
		}
	};
	c=double(e)/double(n);
	cout << "\n" << c*100 << "%" << endl;
	system("pause");
    return 0;
}
  

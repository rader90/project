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
    int i,j=0,sum=0, m;
	double a=0,c=0;
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
	// cout << "������� ����� n : ";
	// cin >> n;
	const int n=4;
	int mas[n];
	
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		c=rand()%20+1;
		mas[i]=c;
	};
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		cout.setf(ios::left);
		cout.width(2);
		cout << mas[i] << " ";
	};
	cout << endl;
	for(i=0;i<n;++i){
		// rand() % [ (MAX - MIN + 1) ] + [ MIN ];
		// c=rand()%6+5;
		cout.setf(ios::left);
		cout.width(2);
		sum=mas[i];
		if(sum%5==0){
			mas[i]=0;
		}else if(sum%2!=0){
			mas[i]=sum*2;
		}else if(sum%2==0){
			mas[i]=sum/2;
		}
		cout << mas[i] << " ";
	};
	system("pause");
    return 0;
}
  

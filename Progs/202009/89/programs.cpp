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
    int a,i,c,t=0;
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
    cout << "������� ����� a : ";
    cin >> a;
    const int n=6;
    int mas[n];
    for(i=0;i<n;++i){
        // rand() % [ (MAX - MIN + 1) ] + [ MIN ];
        c=rand()%10+1;
        mas[i] = c;
		cout << mas[i] << " ";
    };
    for(i=0;i<n;++i){
		if(a==mas[i]){
			t=1;
		};
    };
	cout << "\n" << t << endl;
    system("pause");
    return 0;
}

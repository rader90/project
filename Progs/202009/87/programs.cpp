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
    int a,i,n;
    // ������������� ���������� ��������� ����� � ������� ����� ������� 0
    srand(time(0));
    cout << "������� ����� n �� 0 �� 10 : ";
    cin >> n;
    const int m=10;
    int mas[m];
    for(i=0;i<m;++i){
		if(i%2==0){
			mas[i] = 0;
		}else{
			mas[i] = 1;
		}
    };
    for(i=0;i<n;++i){
        cout << mas[i] << " ";
    };
    system("pause");
    return 0;
}

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
    const int n=5;
    int mas[n];
    for(i=0;i<n;++i){
        // rand() % [ (MAX - MIN + 1) ] + [ MIN ];
        // c=rand()%6+5;
        cout << "������� ����� ��� �������: ";
        cin >> m;
        mas[i] = m;
    };
    for(i=0;i<n;++i){
        // rand() % [ (MAX - MIN + 1) ] + [ MIN ];
        // c=rand()%6+5;
        sum=mas[i];
        cout << mas[i] << " ";
    };
    cout << endl;
    for(i=0;i<n;++i){
        // rand() % [ (MAX - MIN + 1) ] + [ MIN ];
        // c=rand()%6+5;
        sum=mas[i];
        if(i%2==0){
            cout << mas[i] << " ";
        };
    };
    system("pause");
    return 0;
}
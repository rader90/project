// ����������� ����������� ���������� �����-������
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// ����������� ������������ ���� std
using namespace std;

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int i,j,n,m;
    cout << "������� ������ n : ";
    cin >> n;
    for(i=0;i<n;++i){
        cout << "\n";
        j=0;
        for(m=0; m<n-i;++m){
            cout << " ";
        }
        for(;j<=i;++j){

        cout << "*";
        };
    };
    cout << endl;
    system("pause");
    return 0;
}
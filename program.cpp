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
    int a,b,i,x,s,j,n;
    b=1;
    srand(time(0));
    vector <int> vec(0);
    cout << "������� ����� ������� : ";
    cin >> n;
    for(i=0;i<n;++i){
        cout << "������� ����� : ";
        cin >> a;
        vec.push_back(a);
    };
    for(i=0;i<vec.size();++i){
        cout << vec[i] << " ";
    };
    a=vec[vec.size()-1];
    for(i=vec.size()-1;i>0;--i){
        vec[i]=vec[i-1];
    }
    vec[0]=a;
    cout << endl;
    for(i=0;i<vec.size();++i){
        cout << vec[i] << " ";
    };
    cout << endl;
    system("pause");
    return 0;
}

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
	srand(time(0));
	int const t = 5;
	vector <int> vec(0);
	a=rand()%2;
	for(i=0;i<t;++i){
		vec.push_back(0);
	};
	for(i=0;i<t;++i){
		if(i%2==a){
			vec[i]=1;	
		}
	};
	for(i=0;i<vec.size();++i){
		cout << vec[i] << " ";
	};
	cout << endl;
	system("pause");
	return 0;
}

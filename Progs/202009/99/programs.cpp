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
	for(i=0;i<n;++i){
		cout << vec[i] << " ";
	};
		a=(vec.size())/2;
	for(i=0,j=vec.size()-1;i<a;++i,--j){
		if(vec[i]!=vec[j]){
			b=0;
		}
	}
	cout << "\n" << b << endl;
	system("pause");
	return 0;
}

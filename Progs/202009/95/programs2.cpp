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
	vector <int> vec;
	cout << "������� ����� ������� : ";
	cin >> n;
	vec.assign(n);
	cout << "\n" << vec.size() << endl;
	for(i=0;i<n;++i){
		a=rand()%10+1;
		vec[i]=a;
	};
	for(i=0;i<n;++i){
		cout << vec[i] << " ";
	};
	cout << "\n" << vec.size() << endl;
	system("pause");
	return 0;
}

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
	vector <int> vec(5);
	cout << "������� ����� n : ";
	cin >> n;
	cout << "������� ����� x: ";
	cin >> a;
	//for(i=0;i<n;++i){
	//	cout << "������� ����� x: ";
	//	cin >> a;
	//	vec.push_back(a);
	//};
	vec[0]=1;
	vec[1]=2;
	vec[2]=3;
	vec[3]=4;
	vec[4]=0;
	for(i=0;i<vec.size();++i){
		cout << vec[i] << " ";
	};
	cout << endl;
	for(j=vec.size()-1;j!=n;--j){
		vec[j]=vec[j-1];
	}
	vec[n]=a;
	for(i=0;i<vec.size();++i){
		cout << vec[i] << " ";
	};
	cout << endl;
	system("pause");
	return 0;
}

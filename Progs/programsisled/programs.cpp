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
	int a,b,i,x,s,j,n,menu;
	srand(time(0));
	vector <int> vec(0);
	enum menu {add=1, list=2, del=3, exit=4};
	for(; ;){
		cout << "������������ ����������� \"���� � ������\" " << endl;
		cout << "������� ������� : \n "
		<< "1 �������� ������������ add\n " 
		<< "2 ������� �� ����� ��� ���������� list\n "  
		<< "3 ������� ��������� ���������� del\n " 
		<< "4 ����� exit \n " 
		<< ">>> ";
		cin >> menu;
		switch(menu){
			case add: {
				cout << "\n������� �������� ������ ������������ : ";
				cin >> a;
				vec.push_back(a);
				break;
			};
			case list:{
					for(i=0, j;i<vec.size();++i, ++j){
						cout << "�������� ������������ \� " << j << " = "<<vec[i] << "\n";
						};
					cout << endl;
					break;
			};
			case del:{
				vec.pop_back();
				break;
			};
			case exit:{
				return 0;
				break;
			};
		};
		cout << "����� ������������: " << vec.size() << endl;
	};
	system("pause");
	return 0;
}

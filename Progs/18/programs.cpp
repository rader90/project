// ����������� ����������� ���������� �����-�������
#include <iostream>
// ����������� ����������� ���������� �������������� ��������
#include "math.h"

// ����������� ������������ ���� std
using namespace std;


int main(void)
{
	// ����� ��������� 
	system("chcp 1251 > null");
	// ���������� ���������� 
	int a,b,c,d;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	if(a==b){
		cout << " a � b ��������� ������ �� �������� � ����� 7 " << a << "=" << b << endl;
	}else if ((a>7&&b>7)&&a<b){
		cout << a << endl;
	}else if((a>7&&b>7)&&a>b){
		cout << b << endl;
	}else if ((a<7&&b<7)&&a<b){
		cout << b << endl;
	}else if((a<7&&b<7)&&a>b){
		cout << a << endl;
	}else if (a<7&&b>7&&a<b&&a>=0){
		c=b-7;
		d=7-a;
		if(c>d){
			cout << a << endl;
		}else if(c=d){
			cout << " a � b ��������� ������ �� �������� � ����� 7 " << a << "=" << b << endl;
		}else if(c<d){
			cout << b << endl;
		};
	}else if((a>7&&b<7)&&a>b&&b>=0){
		c=7-b;
		d=a-7;
		if(c>d){
			cout << b << endl;
		}else if(c=d){
			cout << " a � b ��������� ������ �� �������� � ����� 7 " << a << "=" << b << endl;
		}else if(c<d){
			cout << a << endl;
		}
	}else if(a=7){
		cout << a << endl;
	}else if(b=7){
		cout << b << endl;
	};
	// ������� ��� ����� ����� ���������� ����
	system("pause");
	return 0;
} 


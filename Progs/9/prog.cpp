#include <iostream>

using namespace std;

int main()
{
	// ����� ��������� �� 1251, ��������� ����� ���������� � ����� ���������
	system("chcp 1251 > null");
	//  ���������� ����������
	int b,c;
	int a = 0;
	while(a<500) 
	{
		cout << "������� �����:";
		cin >> a;
		b=a/10;
		c=a%10;
		cout << b << " - "<< c <<endl;
		if (a>9 && a<100)
		{
		 	if(b==c)
				{
					cout << "1" <<endl;
				}
			else{
				cout << "0" <<endl;
				}
		}
		else
			{
			cout << "ERROR" << endl;
	   		}
	}
	system("pause");
	return 0;
}


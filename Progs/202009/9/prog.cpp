#include <iostream>

using namespace std;

int main()
{
	// Смена кодировки на 1251, отключаем вывод информации о смене кодировки
	system("chcp 1251 > null");
	//  Объявление переменных
	int b,c;
	int a = 0;
	while(a<500) 
	{
		cout << "Введите число:";
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


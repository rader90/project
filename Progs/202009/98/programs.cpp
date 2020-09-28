// Подключение стандартной библиотеки ввода-вывода
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
// Подключение пространства имен std
using namespace std;

int main(void){
	// Смена кодировки cp1251
	system("chcp 1251 > null");
	// Объявление переменных
	int a,b,i,x,s,j,n,menu;
	srand(time(0));
	vector <int> vec(0);
	enum menu {add=1, list=2, del=3, exit=4};
	for(; ;){
		cout << "Исследования лаборатории \"рога и копыта\" " << endl;
		cout << "Введите команду : \n "
		<< "1 Добавить исследование add\n " 
		<< "2 Вывести на экран все исследония list\n "  
		<< "3 Удалить последние исследоние del\n " 
		<< "4 Выйти exit \n " 
		<< ">>> ";
		cin >> menu;
		switch(menu){
			case add: {
				cout << "\nВведите значение нового исследования : ";
				cin >> a;
				vec.push_back(a);
				break;
			};
			case list:{
					for(i=0, j;i<vec.size();++i, ++j){
						cout << "Значение исследования \№ " << j << " = "<<vec[i] << "\n";
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
		cout << "Всего исселдований: " << vec.size() << endl;
	};
	system("pause");
	return 0;
}

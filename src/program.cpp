#include "program.h"

// Разрешение использования имен из стандартной библиотеки
using namespace std; 

//Внутренние имена
int main(int argc, char** args) 
{
	//имя константы
	const int SUCCESS = 0;
		//обращение к стандартной библиотеки
	cout << IT_WORKS << endl;
	//тестирование команды system
	system("pause");
	return SUCCESS;
}	

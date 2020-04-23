#include <iostream>
using namespace std;
void print(char array[4]);
int main(int argc, char** args)
{
	char array[4] = "arr";
	print(array);
	return 0;
}

void print(char array[4])
{
	cout << array;
}

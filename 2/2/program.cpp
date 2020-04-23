#include "program.h"

using namespace std;

int main(int argc, char** args)
{
	int a=15;
	int b=4;
	printVal(VarDel(a,b));
	return 0;
}

void printVal(int a)
{
	cout << a;
}

int VarDel(int a, int b)
{
	int c = a%b;
	return c;
}

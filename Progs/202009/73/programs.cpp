// ����������� ����������� ���������� �����-������
#include <iostream>
#include <windows.h>
// ���������� ����������� ���� std
using namespace std;

void gotoxy(int x, int y);

int main(void){
    // ����� ��������� cp1251
    system("chcp 1251 > null");
    // ���������� ����������
    int a,b,i,j,x,y;
	for(x=1;x<16;++x){
			gotoxy(x,1);
			cout << "*";
			gotoxy(x,8);
			cout << "*";
			for (y=1; y<9; ++y){
				gotoxy(16,y);
				cout << "*";
				gotoxy(1,y);
				cout << "*";
			};
	};
	cout << "\n" << endl;
	system("pause");
    return 0;
}

void gotoxy(int x, int y){
	COORD p={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

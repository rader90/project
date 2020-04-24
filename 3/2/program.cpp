#include <iostream>

using namespace std;

int main(int argc, char** args)
{
	int a;
	int c;
	cout << "Enter num>5 ";
	cin >> a;
	if (a>5){
		cout << "\nEnter num>5 ";
		cin >> a;
		if ((a>5) && (a<10)){
			c=a-5;
		}
		else if((a>5) && (a>10)){
			c=5-a;
		} else{
		cout << "num<=5 Exit!"<< endl;
		return 0;
	}
	}else{
		cout << "num<=5 Exit!"<< endl;
		return 0;
	}
	if(c==0){
		cout << "c=0 c=" << c;
	}else if(c>0){
		cout << "c>0 c=" << c;	
	}else{
		cout << "c<0 c=" << c;
	}
	return 0;
	
}

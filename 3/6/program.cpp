#include <iostream>

using namespace std;

int main (int argc, char** args){
	
	char arr[8];
	cout<<"for 1"<<endl;
	for(int i=0;i<7;i++){
		
		arr[i]=i;
		cout << arr[i] <<endl;
	}
	cout<<"for2"<<endl;
	for(int i, j=0;i<7;j+=3,i++){
		
		arr[j]=j;
		cout << arr[j] <<endl;
	}
	
	return 0;
}
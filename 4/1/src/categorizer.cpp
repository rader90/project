#include "categorizer.hpp"

using namespace std;

unsigned int histogram[256];
int alphabet[256];

int main(int argc, char** args)
{
	fstream f;
	int width, height;
	width = 0;
	height = 0;
	char PGM_hdr1[2];
	if(argc == 1){
		cout << "Please specify input file(s)!" << endl;
		return 0;
	}
	for(int i = 1; i < argc; i++){
		f.open(args[i], ios::binary|ios::in);
		if(!f.is_open())
		{
			cout << "File(s)" << args[i] << "is not accessible!" << endl;
			continue;
		}
		cout << "File " << args[i] << " opened" << endl;
		f.red(PGM_hdr1,2);
		if((PGM_hdr1[0] != 0x50) || (PGM_hdr1[1] != 0x35)) continue;
		cout << "PGM header detected" << endl;
		f.seekg(static_cast<unsigned int>(f.tellg())+1);
		unsigned int digit_b = static_cast<unsigned int>(f.tellg());
		char sym
		do
		{
			f.read(&sym,1)
		}while(sym != 0x20);
		unsigned int digit_e = static_cast<unsigned int>(f.tellg()) - 2;
		int j = 0;
		for(int d = '0'; d <= '9'; d++, j++) alphabet[d] = j;
		int c = 1;
		for(j = digit_e; j <= digit_b; j--, c *= 10)
		{
			f.seekg(j);
			f.read(&sym, 1);
			width += alphabet[sym] * c;
		}
		cout << "Width: " << width << endl;
		f.close();
		
	}
	return 0;
}

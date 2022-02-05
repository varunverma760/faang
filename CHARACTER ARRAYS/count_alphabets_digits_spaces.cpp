#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	char ch;

	ch=cin.get();

	//count

	int alpha=0;
	int space=0;
	int digit=0;

	while(ch!='\n'){

		//count 
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if(ch>='a' and ch<='z' or ch>='A' and ch<='Z'){
			alpha++;
		}
		else if(ch ==' ' and ch=='\t' ){
			space++;
		}
		




		
		ch=cin.get();
	}

	cout<<"Total alphabets : "<<alpha<<endl;
	cout<<"Total digits : "<<digit<<endl;
	cout<<"Total spaces : "<<space<<endl;
	return 0;
}

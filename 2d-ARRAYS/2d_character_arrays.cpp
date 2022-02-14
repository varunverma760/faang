#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	char number[][10]={

		"one",
		"two",
		"three",
		"forty",
		"fortyfive"
	};
	for(int i=0;i<5;i++){
		cout<<number[i]<<endl;
	}
	return 0;
}
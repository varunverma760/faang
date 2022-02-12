#include <iostream>
uisng namespace std;
void setithbit(int &n,int i){

	int mask =(1<<i);
	n=(n|mask);	
}
int main()
{
	int main(int argc, char const *argv[])
{
	int n=5;

	int i;

	cin>>i;

	setithbit(n,i);
	cout<<n;
	
	return 0;
}
	
	return 0;
}
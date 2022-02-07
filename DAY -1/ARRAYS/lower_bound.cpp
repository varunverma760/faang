#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[10];
	int n;
	cin>>n;
	for (int i = 0; i <n ; i++)
	{
		cin>>a[i];
	}
	cout<<binary_search(a,a+10)<<endl;

	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
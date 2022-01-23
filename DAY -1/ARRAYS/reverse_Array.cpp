#include <iostream>
using namespace std;
void rversearray(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s+=1;
		e-=1;
	}
}
int main()
{
	int arr[5];
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	n=sizeof(arr)/sizeof(int);
	rversearray(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

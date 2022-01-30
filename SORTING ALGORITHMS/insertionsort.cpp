#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
	for(int i=1;i<=n-1;i++){
		int current=a[i];
		int prev=i-1;
		while(prev>=0 and a[prev]>current){
			a[prev + 1] = a[prev];
			prev = prev - 1;
		}
		a[prev+1]=current;
	}
}
int main()
{
	int arr[10];
	int n;
	cout<<"enter the value of n :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	n=sizeof(arr)/sizeof(int);
	insertion_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i] <<",";
	}
	
	return 0;
}

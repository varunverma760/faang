#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
	for(int times=0;times<=n-1;times++){
		//repeated swapping
		for(int j=0;j<=n-times-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main()
{
	int arr[5];
	int n;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	n=sizeof(arr)/sizeof(n);
	bubble_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}

	return 0;
}

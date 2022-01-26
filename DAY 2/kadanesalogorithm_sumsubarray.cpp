#include<iostream>
using namespace std;
int max_subarray_sum(int arr[],int n){
	int cs =0;
	int largest =0;
	for(int i=0;i<n;i++){
		cs=cs+arr[i];
		if(cs < 0){
			cs=0;
		}
		largest = max(largest,cs);
	}
	return largest;
}

int main()
{
	//array containing
	int arr[]={10,20,2,3,4,5,-7};
	int n=sizeof(arr)/sizeof(n);
	int x= max_subarray_sum(arr,n);
	cout<<x;
	return 0;
}

#include<iostream>
using namespace std;
int largestsubarray_Sum2(int arr[],int n){

	//prefix sum
	int prefix[10]={0};
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i] = prefix[i-1] + arr[i];
	}
	
	//largest sum logic
	int largest_sum=0;
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			
			int subarraySum = i>0 ?prefix[j] - prefix[i-1]: prefix[j];

			// for(int k=i;k<=j;k++){
			// 	subarraySum += arr[k];
			// }
			largest_sum= max(largest_sum,subarraySum);
		}
	}
	return largest_sum;
}
int main()
{
	int arr[]={1,-2,9,7,3};
	int n=sizeof(arr)/sizeof(int);
	cout<<largestsubarray_Sum2(arr,n);
	return 0;
}

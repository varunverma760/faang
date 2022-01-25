#include <iostream>
using namespace std;
void printallpairs(int arr[],int n){
	for(int i=0;i<n;i++){
		int x=arr[i];
		for(int j=i+1;j<n;j++){

			int y=arr[j];

		    cout<<x<<","<<y<<endl;
	    }
	 cout<<endl;
	}
}

int main()
{
	int arr[4]={10,20,11,22};
	int n=sizeof(arr)/sizeof(int);
	printallpairs(arr,n);
	// for(int i : arr){
	// 	cout<<i<<endl;
	// }

	return 0;
} 

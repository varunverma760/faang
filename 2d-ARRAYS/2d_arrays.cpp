#include <iostream>
using namespace std;

void print(int arr[][100],int n,int m){
	//print
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

}

int main()
{
	int arr[100][100];
	int n,m;
	cout<<"Enter the value of n";
	cin>>n;
	cout<<"Enter the value of m";
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	print(arr,n,m);
	
	return 0;
}

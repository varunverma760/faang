#include<iostream>
using namespace std;
int main(){
	int arr[100];
	
	cout<<"enter the elements :"<<endl;
	int n,key,i;

	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the key :"<<endl;
	cin>>key;
	
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			cout<<"Key found";
			break;
		}
	}
	
	if(key==arr[i]){
		cout<<"key is not found";
	}
	return 0;
}

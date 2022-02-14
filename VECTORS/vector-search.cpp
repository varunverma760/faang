#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> arr={10,11,2,3,45,5,4,7,6};
	int key;
	cout<<"enter the value of the key :";
	cin>>key;
	vector<int>::iterator it=find(arr.begin(),arr.end(),key);
	if(it!=arr.end()){
		cout<<"Present at the index : "<<it-arr.begin();
	}
	else{
		cout<<"Element is not found";
	}

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	//demo vector
	vector<int>arr={1,2,3,10,12,15};

	cout<<arr.size()<<endl;
  
  //capacity of the vector
  
  cout<<arr.capacity()<<endl;
	return 0;
}

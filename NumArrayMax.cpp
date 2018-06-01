#include <iostream>
using namespace::std;

int main()

{
	
	int nums[10] = {12, 5, 27, 420, 42, 666, 77, 56, 121, 84};
	int max=nums[0];
	int i;
	for (i=1; i<10; i++) {
		if(nums[i]>max) max=nums[i];
	
	}
	cout<< max << endl;
	return(0);
}

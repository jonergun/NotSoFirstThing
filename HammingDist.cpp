#include <iostream>
using namespace::std;

int main()
{
	char string1[] = "ghgsr";
	char string2[] = "ghrrr";
	int ham=0;
	for (int i=0; i<5; i++){
		if (string1[i]!=string2[i])
			ham++;

	}
	cout << ham << endl;
	return(0);
}


#include <iostream>
using namespace::std;



int min(int num1, int num2)
{
	if(num1 < num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main(int argc, char* argv[])
{
	int n1;
	n1=atoi(argv[1]);
	int n2;
	n2= atoi(argv[2]);
	int anser = min(n1,n2);
	int result = min(n1, n2);
	cout<< anser << endl;

	return 0;
}

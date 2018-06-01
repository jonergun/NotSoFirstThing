# include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char *argv[]) {
	bool found=false;
	int set[7] = {30, 40, 20, 34, 100, 70, 90};
	int i;
	int typed=atoi(argv[1]);
	for (i=0; i<7; i++) {
		if (typed == set[i]) {
			found=true;
			cout << "The lucky number is " << typed << endl;
			break;
		}
	}
	if (found == false) {
		cout << "no" << endl;
	}
	return(0);
}

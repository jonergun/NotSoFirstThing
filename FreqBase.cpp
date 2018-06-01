#include <iostream>
using namespace::std;

int main()
{
	char dna[] = "ACTGGCTACGGGCATCCGAG";
	int i;
	int a, g, c, t;
	a=0;
	g=0;
	c=0;
	t=0;
	for (int i=0; i<20; i++){
		if(dna[i] == 'A') {
			++a;
		}	
		else if(dna[i]== 'T') {
			++t;
		}	
		else if(dna[i] == 'C') {
			++c;
		}	
		else if(dna[i] == 'G') {
			++g;
		}	
		

	}
	cout << "a is" <<a<< endl;
	cout << "c is" <<c<< endl;
	cout << "t is" <<t<< endl;
	cout << "g is" <<g<< endl;
	return(0);
}


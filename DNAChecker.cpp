#include <iostream>
using namespace::std;

int main()
{
	char dna[] = "ATCACTGGCTACGGGCATCCGAG";
	int i;
	for (int i=0; i<5; i++){
		if(dna[i] == 'A') {
			continue;
		}	
		else if(dna[i]== 'T') {
			continue;
		}	
		else if(dna[i] == 'C') {
			continue;
		}	
		else if(dna[i] == 'G') {
			continue;
		}	
		else {
			cout << "you done goofed" << endl;
		}

	}
	return(0);
}


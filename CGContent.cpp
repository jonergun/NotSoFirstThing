#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char* argv[]) {
        ifstream file (argv[1]);
        int cg=0;
	int total=0;
        string s;
        if(!file.is_open()) {
                cout << "actual file plese" << endl;
                return(0);
        }
        while(getline(file, s)) {
        	for (int i=0; i<s.length(); i++){
			if(s[i] == 'A') {
				total++;
			}
			else if(s[i] == 'T') {
				total++;
			}
			else if(s[i] == 'C') {
                        	total++;
				cg++;
                	}

			else if(s[i] == 'G') {
                        	total++;
				cg++;
                	}
		}
	}
	double answer=cg*100.0/total;
	cout << answer << endl;
	return(0);
}

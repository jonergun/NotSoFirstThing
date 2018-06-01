#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char* argv[]) {
	ifstream file (argv[1]);
	int ham=0;
	string s1;
	string s2;
	if(!file.is_open()) {
		cout << "actual file plese" << endl;
		return(0);
	}
	getline(file, s1);
	getline(file, s2);
        for (int i=0; i<s1.length(); i++){
                if (s1[i]!=s2[i])
                        ham++;

        }
        cout << ham << endl;
        return(0);
}

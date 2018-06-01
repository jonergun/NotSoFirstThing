#include <iostream>
#include <fstream>
using namespace::std;

int getSum(int len, int num[])
{
	int thingy=0;
	for(int i=0; i<len; i++) {
		thingy=thingy+num[i];
	}
	return(thingy);
}

int main(int argc, char* argv[])
{
        if(argc < 2) {
                cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
                return 0;
        }
        ifstream file(argv[1]);
        int a;
	string line;
	if(file.is_open()) {
                int array [1000];
		int idx=0;
		while(getline(file,line)) {
			array[idx]=stoi(line);
			idx ++;
 		}
                a=getSum(idx, array);
		cout << a << endl;
		file.close();
        }
        else {
                cout<<"unable to open file "<<argv[1]<<endl;
        }
        return 0;
}


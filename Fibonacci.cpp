# include <iostream>
using namespace::std;

int main(int argc, char *argv[]) {
	int set[26];
	set[0] = 0;
	set[1] = 1;
	int i;
	int a=atoi(argv[1]);
	int x;
	if(a>25) {
		cout << "less than 26 please" << endl;
		return(0);
	}
	for(i=2; i<=a; i++) {
		set[i]=set[i-1]+set[i-2];
	}
	cout << set[a] << endl;
	return(0);
}

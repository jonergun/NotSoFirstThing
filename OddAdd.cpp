# include <iostream>
using namespace::std;

int main(int argc, char *argv[]) {
	if(argc>=3) {
		int i;
		int a=0;
		int thing1 = atoi(argv[1]);
		int thing2 = atoi(argv[2]);
		for(i=thing1; i<=thing2; i++) {
			if(i%2==1){
				a=a+i;
			}
		}	
		cout << a << endl;
	}
	else {
		cout << "please type two values beside the executable mr. mate" 		<< endl;
	}
	return(0);
}

#include <iostream>
using namespace::std;

int main() 
{
	char what;
	int size;
	cout << " character please: "<<endl;	
	cin >> what;
	cout << " height please: "<<endl;	
	cin >> size;
	int r, c;
	//roof
	for(r = 0; r < size; r ++) {
		for(c = 0; c < size - r; c ++) {
			cout<<' ';
		}
		for(c = 0; c < 2*r+1; c ++) {
			cout<<what;
		}
		cout<<endl;
	}
	//top half of square
	for( r=0; r < size/2; r++) {
		for(c = 0; c < 2*size+1; c++) {
			cout<<what;
		}		
		cout<<endl;
	}
	//door 
	for( r=0; r < size/2; r++) {
		int a = 2 * size / 3;
                for(c = 0; c < a; c++) {
                        cout<<what;
                }
                for(c = 0; c < a; c ++) {
                        cout<<' ';
		}
		for(c = 0; c < (2*size+1)-2*a; c++) {
                        cout<<what;
		}
		cout<<endl;
	}
	return(0);
}	


#include <iostream>
using namespace::std;

int main()
{
	int var; //declare a variable
	cout << "wat positive integer u want m8 " << endl; 
	//alert the user to type in a value 
	cin >> var; //use cin to assign user's input to the variable	
	int sum; //the sum
	sum=var*(var+1)/2;
	cout << "sum=" <<sum<< endl;
        return(0);
}


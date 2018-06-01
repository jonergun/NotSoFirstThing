#include <iostream>
using namespace::std;
int main()
{
	int var; //declare a variable
        cout << "which number?" << endl;
        //alert the user to type in a value
        cin >> var; //use cin to assign user's input to the variable
        int thing=1; //the sum
        for(int i=1; i<=var; i++)
		thing=2*thing;
	cout << "the answer is " <<thing<< endl;
        return(0);
}


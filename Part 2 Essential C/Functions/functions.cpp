// Functions Practicing
#include <iostream>

using namespace std;

// New function
// return function( arguments*)
int add(int a, int b){
	int c;
	
	c = a + b;
	
	return c;
}



int main (void){
	
	int num1 = 10;
	int num2 = 15;
	int sum;
	
	// Calling our function
	sum = add(num1, num2);
	
	// Print result
	cout << "Num 1: " << num1 << endl;
	cout << "Num 2: " << num2 << endl;
	cout << "Sum: " << sum << endl;
	
	return 0;
}




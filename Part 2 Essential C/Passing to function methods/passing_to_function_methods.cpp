// Passing to function methods
#include <iostream>
#include <stdio.h>

using namespace std;

// Normal parameter passing (C/C++)
void increase(int a){
	int c;
	// We increase a, but it won't reflect on num1.
	a++;
	
	cout << "Val in function: " << a << endl;
}

// Function to test pass by address (C/C++)
void swap(int *x, int *y){
	// We declare x and y as pointers. if not, this
	// wont work
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

// Function to pass by reference (C++ only)
void swapRef(int &x, int &y){
	// declaring with & acts like reference. Take care,
	// and not abuse of this notation, it could decrease performance
	// as the cody gets "copied" when called.
	int temp;
	
	temp = x;
	x = y;
	y = temp;
	
}

int main(void){
	
	int num1 = 10;
	int num2 = 15;
	
	cout << "Original num1 val: " << num1 << endl;
	cout << "Original num2 val: " << num2 << endl;
	
	// Normal parameter passing (C/C++)
	cout << endl << "Normal parameter passing" << endl;
	increase(num1);
	cout << "num1: " << num1 << endl;
	
	// Passing by address (C/C++)
	cout << endl << "Pointer parameter passing" << endl;
	swap(&num1, &num2);
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	
	// Returning to normal values
	num1 = 10;
	num2 = 15;
	
	cout << endl << "Pointer parameter passing" << endl;
	swap(num1, num2);
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	
	
	return 0;
	
}










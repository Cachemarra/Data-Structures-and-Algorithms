// Structure as parameter

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Creating our struct
struct Rectangle{
	int length;
	int width;
};

// Function to pass our struct
void fun(struct Rectangle r){
	// Passing by value, we have a copy of rectangle.
	// This won't modify our original struct
	r.length = 20;
	
	cout << "Length: " << r.length <<endl;
	cout << "Width: " << r.width << endl;
}

void funAsPtr(struct Rectangle *p){
	// Access to original struct
	p -> length = 20;
	
	cout << "Passing as ptr" << endl;
	cout << "Length: " << p -> length <<endl;
	cout << "Width: " << p -> width << endl;
	
}


// Function that returns a struct
struct Rectangle *funRetRect(){
	
	struct Rectangle *p; // Place on heap
	
	//p = (struct Rectangle *) malloc(sizeof(struct Rectangle)) // C syntax
	p = new Rectangle; // C++ syntax
	
	p -> length = 15;
	p -> width = 7;
	
	return p;
}


// Main function
int main(void){
	// initializations
	struct Rectangle r = {10, 5};
	struct Rectangle *ptr;
	
	
	// Passing to function
	cout << endl << "Function" << endl;
	fun(r);
	
	cout << endl << "Original values" << endl;
	printf("Lenght %d\nWidth %d\n", r.length, r.width);
	
	cout << "==========================" << endl;
	cout << "Pasing by pointer" << endl;
	
	funAsPtr(&r);
	cout << endl << "Main funct values" << endl;
	printf("Lenght %d\nWidth %d\n", r.length, r.width);
	
	cout << "==========================" << endl;
	cout << "Returning a pointer" << endl;
	
	ptr = funRetRect();
	
	cout << "Length: " << ptr -> length << endl;
	cout << "width: " << ptr -> width << endl;
	
	return 0;
}




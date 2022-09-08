// OOP program

#include <iostream>
#include <stdio.h>

using namespace std;


// Defining the new class
class Rectangle{
	public:
		// init params
		int length;
		int width;


		// Class methods
		// Initializing function
		void initialize(int l, int w){
			length = l;
			width = w;
		}
		
		
		// Finding area function
		int area(){
			return length * width;
		}
		
		
		// Find perimeter
		int perimeter(){
			return 2 * (length + width);
		}
	// end public	
}; // end class

// Main function
int main(void){

	Rectangle r = {0, 0};
	int l, w;
	
	printf("Enter length and width\n");
	cin >> l >> w;
	
	// initialize now is a method for r.
	r.initialize(l, w);
	
	int ar;
	int perim;
	
	ar = r.area();
	perim = r.perimeter();
	
	printf("Area: %d\nPerimeter: %d\n", ar, perim);
	
	return 0;	
}




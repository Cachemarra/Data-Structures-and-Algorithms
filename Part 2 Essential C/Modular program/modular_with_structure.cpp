// Modular program

#include <iostream>
#include <stdio.h>

using namespace std;


// Defining the structure
struct Rectangle{
	int length;
	int width;
};


// Initializing function
void initialize(struct Rectangle *r, int l, int w){
	r->length = l;
	r->width = w;
}


// Finding area function
int area(struct Rectangle r){
	return r.length * r.width;
}


// Find perimeter
int perimeter(Rectangle r){
	return 2 * (r.length + r.width);
}


// Main function
int main(void){

	Rectangle r = {0, 0};
	int l, w;
	
	printf("Enter length and width\n");
	cin >> l >> w;
	// Passing r as reference
	initialize(&r, l, w);
	
	int ar;
	int perim;
	
	ar = area(r);
	perim = perimeter(r);
	
	printf("Area: %d\nPerimeter: %d\n", ar, perim);
	
	return 0;	
}




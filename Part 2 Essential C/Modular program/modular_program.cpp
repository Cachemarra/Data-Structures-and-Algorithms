// Modular program

#include <iostream>
#include <stdio.h>

using namespace std;


// Finding area function
int area(int length, int width){
	return length * width;
}


// Find perimeter
int perimeter(int length, int width){
	return 2 * (length + width);
}


// Main function
int main(void){
	int length = 0;
	int width = 0;
	
	printf("Enter length and width\n");
	cin >> length >> width;
	
	int ar;
	int perim;
	
	ar = area(length, width);
	perim = perimeter(length, width);
	
	printf("Area: %d\nPerimeter: %d\n", ar, perim);
	
	return 0;	
}




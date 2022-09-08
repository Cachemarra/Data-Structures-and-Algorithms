// Monolithic program

#include <iostream>
#include <stdio.h>

using namespace std;

// Main function
int main(void){
	int length = 0;
	int width = 0;
	
	printf("Enter length and width\n");
	cin >> length >> width;
	
	int area;
	int peri;
	
	area = length * width;
	peri = 2 * (length + width);
	
	printf("Area: %d\nPerimeter: %d\n", area, peri);
	
	return 0;	
}




// References

# include <iostream>

using namespace std;

int main(){
	
	int a = 10;
	int &r = a; // Reference is an new alias for a.
	
	r = 25;
	cout << a << endl << r << endl;
	
	
	int b = 30;
	r = b; // now r is a reference for b
	// As r is a reference for a and r is a, then, a = b
	cout << a << endl << r << endl;
	
	
	
	
	return 0;
}



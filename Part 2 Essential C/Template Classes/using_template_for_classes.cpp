//
// Created by Cachemarra on 9/8/2022.
//
#include "iostream"

using namespace std;

// Template
template <class T>
class Arithmetic {
private:
    T a;
    T b;

// Declaring methods but not defining
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
    // Destructor
    ~Arithmetic();
};

// Defining function methods
// Constructor
template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this -> a = a; // In this way, the compiler will know
    this -> b = b; // the difference between both variables.
}

// Methods
// Adding function
template <class T>
T Arithmetic<T>::add(){
    T c;
    c = a + b;
    return c;
}
// Subtracting method
template <class T>
T Arithmetic<T>::sub(){
    T c;
    c = a - b;
    return c;
}
template <class T>
Arithmetic<T>::~Arithmetic() {cout << endl << "Destroying class" << endl;}


// Main function
int main(void){
    // Now we must specify what kind of var is our input!
    Arithmetic<int> ar1(10, 7);
    Arithmetic<float> ar2(1.4142, 2.6);

    // Using method
    cout << "First Arithmetic class" << endl;
    cout << "add method: " << ar1.add() << endl;
    cout << "sub method: " << ar1.sub() << endl;

    cout << endl << "Second Arithmetic class" << endl;
    cout << "add method: " << ar2.add() << endl;
    cout << "sub method: " << ar2.sub() << endl;

    return 0;
}
//
// Created by Cachemarra on 9/8/2022.
//

//C++ Explicit Conversion
//When the user manually changes data from one type to another, this is known as explicit conversion. 
//This type of conversion is also known as type casting.
//
//There are three major ways in which we can use explicit conversion in C++. They are:
//
//C-style type casting (also known as cast notation)
//Function notation (also known as old C++ style type casting)
//Type conversion operators


//1. C-style Type Casting known as cast notation
////Syntax : (data_type)expression;

//	// initializing int variable
//	int num_int = 26;
//	
//	// declaring double variable
//	double num_double;
//	
//	// converting from int to double
//	num_double = (double)num_int;
//
////2. Function-style Casting
////Syntax : data_type(expression);
//
//	// initializing int variable
//	int num_int = 26;
//	
//	// declaring double variable
//	double num_double;
//	
//	// converting from int to double
//	num_double = double(num_int);
	
#include <iostream>

using namespace std;

int main() {
    // initializing a double variable
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;

    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;

    return 0;
}

//Type conversion operator

//static_cast
//dynamic_cast
//const_cast
//reinterpret_cast



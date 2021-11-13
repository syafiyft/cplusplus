/**
*@author Muhammad Syafiy
* Matric no 2115569
* Lab #1 Section 2
*/

#include<iostream>

using namespace std;

int main() {
	
	/*Implicit Type Conversion 1
	The type conversion that is done automatically done by the compiler is known as implicit type conversion.
	This type of conversion is also known as automatic conversion.*/
	
	// Working of implicit type-conversion
   // assigning an int value to num_int
   int num_int = 9;

   // declaring a double type variable
   double num_double;
 
   // implicit conversion
   // assigning int value to a double variable
   num_double = num_int;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;

	//output num_int = 9
	//       num_double = 9
	
	int num_int;
   double num_double = 9.99;

   // implicit conversion 2
   // assigning a double value to an int variable
   num_int = num_double;

   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;
   
	//output	num_int = 9
	//			num_double = 9.99
	
	//data type sequence from big to small
	// long double > double > float > long > int > short > char
	
	
	
	
	return 0;
	
	
}


/**
*@author Muhammad Syafiy bin Abdul Rahman
* Matric no: 2115569
* Lab #1 Section 4
*/

#include<iostream>

using namespace std;

int main() {
	
	//Exercise 1
	
	double celcius, fahrenheit;
	
	cout << "Enter a degree in Celcius: ";
	cin >> celcius;
	
	fahrenheit = (9.0/5.0) * celcius + 32.0;
	
	cout  << celcius << " Celcius is " << fahrenheit << " Fahrenheit " << endl;
	
	//Exercise 2
	
	float subtotal, gratrate, gratuity, total;
	
	cout << "Enter the subtotal and a gratuity rate" << endl;
	cout << "Subtotal: ";
	cin >> subtotal;
	
	cout << "Gratuity rate: ";
	cin >> gratrate;
	
	gratuity = (gratrate/100) * subtotal;
	total = gratuity + subtotal;
	
	cout << "The gratuity is $" << gratuity << " and total is $" << total <<endl;
	
	//Exercise 3
	
	int numbers, sum;
	
	cout << "Enter a number between 0 and 1000: ";
	cin >> numbers;
	
	sum = numbers%10 + (numbers/10)%10 + (numbers/100);
	
	cout << "The sum of the digits is " << sum << endl;
	
	return 0;
}


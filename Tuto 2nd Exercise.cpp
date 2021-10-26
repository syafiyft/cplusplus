/**
@author Muhammad Syafiy bin Abdul Rahman
Matric no: 2115569
Lab #2 Section 4
*/

#include<iostream>
#include <iomanip>


using namespace std;

int main() {
	
//Exercise 1

	double weightkg, weightpound;
	
	cout << "Enter your weight (in kg)" << endl;
	cout << "Weight: ";
	cin >> weightkg;
	
	weightpound = weightkg * 2.2;
	
	cout << fixed << showpoint;
	
	cout << setprecision(2) << "\n\nYour weight in kg is " << weightkg << endl;
	cout << setprecision(2) << "Your weight in pound is " << weightpound << endl;
	
	return 0;
}


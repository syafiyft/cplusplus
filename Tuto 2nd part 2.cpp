/**
@author Muhammad Syafiy bin Abdul Rahman
Matric no: 2115569
Lab #2 Section 4
*/

#include<iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main() {
	
//Exercise 2
	
	double wirelength, piclength, picwidth;
	double x=0.0, y=0.0;
	
	cout << "Please enter the length of the wire" << endl;
	cout << "Wire length:";
	cin >> wirelength;
	
	x = piclength;
	y = picwidth;
	
	
	//wirelength = 2x + 2y;
	//wirelength = 5y;
	y = wirelength/5;
	
	x = y * 1.5;
	
	cout << fixed << showpoint;
	
	cout << setprecision(2) << "\n\nLength of picture frame is " << x << endl;
	cout << setprecision(2) << "Width of picture frame is " << y << endl;
	
	
	
	
	return 0;
}


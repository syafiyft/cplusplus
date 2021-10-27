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
	
//Exercise 3
	
	double x, y, newtime, distanceA, distanceB, hours, minutes, shortestDistance;
	
	cout << "Enter average speed for car A and car B (miles/hour)" << endl;
	cout << "Car A: ";
	cin >> x;
	cout << "Car B: ";
	cin >> y;
	
	cout << "The elapsed time in hours and minutes: ";
	cin >> hours >> minutes;
	
	//change minutes to hour so later it will be easier to cancel out miles/hour and hour
	newtime = hours + minutes/60.0;
	
	distanceA = x * newtime;
	distanceB = y * newtime;
	
	//pythagorastheorem
	shortestDistance = sqrt(pow(distanceA, 2) + pow(distanceB, 2));
	
	cout << fixed << setprecision(2);
	cout << "The shortest distance between car A and car B is " << shortestDistance << "miles"
	<< endl;
	
	return 0;
}


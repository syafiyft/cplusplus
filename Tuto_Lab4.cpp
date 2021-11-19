/* @author Syafiy Rahman
Matric no 2115569
Lab 4 Section 2
*/

#include <iostream>

using namespace std;

main ()
{
/* Exercise 1 : Write a program that prompts the user to input an integer and then outputs both
the individual digits of the number and the sum of the digits.*/

	int num, digitcount = 0, sum = 0;
	int digits[10] = {0}; //array
	
	cout << "Enter an integer number: ";
	cin >> num;
	
	
	while (num > 0)
	{
		digits[digitcount] = num % 10; //remainder @ digitcount for array index 3456 % 10 is 6
		num /= 10; //division to ignore the after pointer number ie. 345.6
		digitcount++;
	}

	cout << "The individual digits are ";
	//now we need to note that digitcount is 4
	//count backward to print backward
	for(int i = digitcount -1; i >= 0; i--)
	{
		cout << digits[i] << " "; //start with the highest array first. bcs we use i-- @ digitcount -1
	
		sum += digits[i]; // sum = sum + digits(all in array)
	}
	cout << "\nThe sum of the total individual digits is " << sum;

return 0;
}

/* Exercise 2 : (Pass or fail) Write a program that prompts a student to enter a Java score. If the
score is greater or equal to 60, display ?you pass the exam?; otherwise, display ?you don?t pass
the exam?. Your program ends with input -1.*/

#include <iostream>

using namespace std;

int main ()
{
	int score;
	
	cout << "Enter your score: ";
	cin  >> score;
	
	if (score >= 60 && score <= 100)
	{
		cout << "You pass the exam.";
	}
	else if (score >= 0 && score < 60)
	{
		cout << "You don't pass the exam.";
	}
	else (score == -1)
	{
		cout << "No numbers are entered except -1";
	}
	
return 0;
}

/* Exercise 3 : Write a program that prompts the user to enter two integers. The program
outputs how many numbers are multiples of 3 and how many numbers are multiples of 5
between the two integers (inclusive).*/

#include <iostream>

using namespace std;

int main ()
{
	int num1, num2, multiple3{0}, multiple5{0};
	
	cout << "Enter two integers : ";
	cin >> num1 >> num2;
	
	for (int i = num1; i <= num2; i++)
	{
		if(i % 3 == 0)
			multiple3++;
			
		else if(i % 5 == 0)
			multiple5++;
	}
	
	cout << "No of multiples of 3 : " << multiple3 << "\nNo of multiples of 5 : " << multiple5;
	
return 0;
}

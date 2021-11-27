/* Exercise 1 : (Multiples) Write a function isMultiple that determines, for a pair of integers,
whether the second integer is a multiple of the first. The function should take two integer
arguments and return true if the second is a multiple of the first and false otherwise.
Incorporate this function in a C++ program that inputs a series of pairs of integers (one pair at a
time) and determines whether the second value in each pair is a multiple of the first.*/

#include <iostream>

using namespace std;

bool isMultiple(int no1, int no2)
{
	bool status = false;

	if(no2 % no1 == 0)
		status = true;

return status;
}

int main()
{
	int no1, no2;

	cout << "Enter two integers : ";
	cin >> no1 >> no2;

	if(isMultiple(no1, no2) == 0)
		cout << "False";
	else
		cout << "True";

return 0;
}


/* Exercise 2 : (Parking Charge) A parking garage charges a RM 2.00 minimum fee to park for up
to three hours. The garage charges an additional RM 0.50 per hour for each subsequent hour.
The maximum charge for any given 24-hour period is RM 10.00. Assume that no car parks for
longer than 24 hours at a time. Write a C++ program that calculates and displays the parking
charges for each customer who parked in the garage yesterday. You should enter the hours
parked for each customer. The program should display the charge for the current customer and
should calculate and display the running total of yesterday�s receipts. It should use the function
calculateCharges to determine the charge for each customer.*/

#include <iostream>
#include <iomanip>

using namespace std;

void calculateCharges(int hour)
{
	int remhour;
	float charges, newcharges = 10.00;

	if(hour > 0 && hour <= 3)
	{
		charges = 2.00;
		cout << "Total to pay : RM" << fixed << setprecision(2) << charges;
	}
	else if(hour > 3)
	{
		remhour = hour - 3;
		charges = 2.00 + (static_cast<float>(remhour) * 0.50);

		if(charges > 10.00)
		{
			cout << "Total to pay : RM" << fixed << setprecision(2) << newcharges;
		}
		else
			cout << "Total to pay : RM" << fixed << setprecision(2) << charges;

	}
}

int main()
{
	int hour;

	cout << "Hour(s) : ";
	cin >> hour;

	calculateCharges(hour);

return 0;
}


/* Exercise 3 : (Display pattern) Write a C++ function to display a pattern as follows:
1
1 2
1 2 3
�.
1 2 3 � n-1, n
The function header is
void displayPattern (int n)*/

#include <iostream>

using namespace std;

void displayPattern(int n)
{
	for (int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= i; j++)
    	{
    		cout << j << " ";
		}

		cout << "\n";
	}
}

main()
{
	int n;

	cout << "Enter an integer : ";
	cin >> n;

	displayPattern(n);

return 0;
}


/* Exercise 4 : Write a function, reverseDigit, that takes an integer as a parameter and returns the number
with its digits reversed. For example, the value of reverseDigit(12345) is 54321; the value
of reverseDigit(5600) is 65; the value of reverseDigit(7008) is 8007; and the value of reverseDigit(-532) is -235.*/

#include <iostream>

using namespace std;

int reverseDigit(int num)
{
	int rem, revnum;

	while(num != 0)
	{
        rem = num%10;
        revnum = revnum*10 + rem;
        num /= 10;
    }

return revnum;
}

int main()
{
	int num;

	cout << "Enter an integer : ";
	cin >> num;

	cout << "The reverse value : " << reverseDigit(num);

return 0;
}

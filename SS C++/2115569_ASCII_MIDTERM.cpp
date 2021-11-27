/*Name Muhammad Syafiy bin Abdul Rahman
2115569 Section 4 */

#include <iostream>
#include <iomanip>

using namespace std;

main()
{
	char oAnswer;
	char iChar;
	do
	{
		cout << "Enter a character: ";
		cin >> iChar;
        cout << endl;
        //take input character
		cout << "The character you just entered is: " << iChar << endl;
        //show
		cout << "The ASCII value of the entered character is: " << (int)iChar << endl; //change char to int
		cout << "The next character is: " << (char)((int)iChar + 1) << endl << endl;
        //show next character

        //repeat
		cout << "Press any key to continue or n to quit: ";
		cin >> oAnswer;

		if (oAnswer == 'n' || oAnswer == 'N')
			cout << "Thank you for using this program";


	}while (oAnswer != 'N' && oAnswer != 'n');


}

/* Name: Muhammad Syafiy bin Abdul Rahman 2115569
Section 4 */

#include <iostream>

using namespace std;

int getMenuChoice(); //fx prototype
int assignSlot(int menuValue, int x, int sMorning, int sAfternoon);
main()
{
    int choice, Fshow, x;
    int menu, finalResult;
    static int sMorning = 0, int sAfternoon = 0;
    while (x <= 10){


    menu = getMenuChoice();
    //Fshow = assignSlot(menu); //parameter take from menu
    if(choice == 1)
        sMorning++;
    else if (choice == 2)
        sAfternoon++;
    else
        cout << "Both sessions are full." << endl;

    finalResult = assignSlot(menu, x, sMorning, sAfternoon);

    x++;
    }

    cout << finalResult << endl;
}

int getMenuChoice()
{
    int result, choice;

    cout << "Please type 1 for Morning session." << endl;
    cout << "Please type 2 for Afternoon session." << endl;
    cout << "Choice: ";
    cin >> choice;

    return result; //return to
}

int assignSlot(int menuValue, int x, int sMorning, int sAfternoon)
{
    int choice2;

    switch(menuValue)
    {
    case 1:
        if (sMorning <= 5)
        {
            cout << " Morning session. Slot " << x << endl;
        }
        else
        {
            if(sMorning <= 5 && menuValue != 1) //1 - 5
            {
                cout << "Morning session is full, Afternoon session?" << endl;
                cout << "1. Yes, 2. No." << endl;
                cout << "Your choice: ";
                cin >> choice2;
            }
            else{
                cout << "Both session are full" << endl;
                choice2 = 3; //other than 1 and 2
            }
        }
    case 2:
        if (sAfternoon <= 10) // 6-10
        {
            cout << " Afternoon session. Slot " << x << endl;
        }
        else
        {
            if(sAfternoon <= 10 && menuValue != 1)
            {
                cout << "Afternoon session is full, Afternoon session?" << endl;
                cout << "1. Yes, 2. No." << endl;
                cout << "Your choice: ";
                cin >> choice2;
            }
            else{
                cout << "Both session are full" << endl;
                choice2 = 3; //other than 1 and 2
            }
        }
    return choice2;

    }
}

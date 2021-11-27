#include <iostream>


using namespace std;

int getMenuChoice(int i,int session1, int session2);

int main()
{
    int i,j, studentchoice, session1=0, session2=0;

    for (i = 1; i <= 10; i++)
    {
        studentchoice = getMenuChoice(i,session1,session2);
        if (studentchoice == 1)
            session1++;
        else if (studentchoice == 2)
            session2++;
        else
            cout << "No slot available" << endl;
    }

    return 0;
}

int getMenuChoice(int i, int session1, int session2)
{
    int choice;

    cout << "Please Type 1 for Morning session" << endl;
    cout << "Please Type 2 for Afternoon session" << endl;
    cout << "choice: ";
    cin >> choice;

    if (choice == 1)
    {
        if (session1 <= 5)
        {
            cout << " Morning session. Slot " << i << endl;
        }
        else
        {
            if (session1 <= 5)
            {
                while (choice != 1)
                {
                    cout << "Morning session is full, Afternoon session?" << endl;
                    cout << "1. Yes, 2. No." << endl;
                    cout << "Your choice: ";
                    cin >> choice;
                }
            }
            else
            {
                cout << "Both session are full" << endl;
                choice = 3;
            }
        }
    }
    else
    {
        if (session2 <= 10)
        {
            cout << " Afternoon session. Slot " << i;
        }
        else
        {
            if (session2 <= 10)
            {
                while (choice != 1)
                {
                    cout << "Afternoon session is full, Morning session?" << endl;
                    cout << "1. Yes, 2. No." << endl;
                    cout << "Your choice: ";
                    cin >> choice;
                }
            }
            else
            {
                cout << "Both session are full " << endl;
                choice = 3;
            }

        }
    }

    return choice;
}

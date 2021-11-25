#include <iostream>

using namespace std;
//loops - exercises and nested loops
main()
{
    int nr = 1234; //4 digits
    int nrOfDigits = 1;

    cout << 1234 / 10 << endl; //123
    cout << 1234 / 10.0  << endl; //123.4

    cout << 123 / 10 << endl;
    cout << 12 / 10 << endl;
    cout << 1 / 10 << endl;

    int tmp = nr;
    while(tmp /= 10) //when tmp = 0 (stop), nrOfDigits = 4
        nrOfDigits++;

    cout << "the number " << nr << " has " << nrOfDigits << " digits" << endl;

    /*
        1 2 3 4 5  6   7 8  9  10
        2 4 6 8 10 12 14 16 18 20
        3 6 9 12 15 18 21 . . . .
        4 ...
        5 ...
    */
    //ACTUAL LOOP - external loop
   /* for (int i = 1; i <= 10; i++) //external loops (rows), length
    {
        /*if (i == 5)     //row 5 wont be shown
            continue; //EVERYTHING AFTER continue instructions wont be be executed
        */ //BUT LOOP WONT STOP bcs of it

        /*if ( i == 5)
            break; //EVERYTHING after BREAK wont be executed & we are LEAVING the ACTUAL LOOP @ external loop
        */
    /*
        for (int j =1; j <= 10; j++) //internal loops (columns), width
        {
            if (j == 5) //columns 5 and above will not shown
                break; // try change to CONTINUE;
            cout.width(4);
            cout << i * j;
        }
        cout << endl;
    }
    */
    for (int i = 1, j = 1; i <= 10; i++)
    {
            cout.width(4);
            cout << i * j;

            if (i == 10) //when we finished the external loop and meet 10, then we will proceed to multiplication
            {
                j++;
                i = 0;
                cout << endl;
            }

            if (j == 10 + 1)
                break;
    }

}


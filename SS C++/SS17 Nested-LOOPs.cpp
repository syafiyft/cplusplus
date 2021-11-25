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

    for (int i = 1; i <= 12; i++) //external loops (rows)
    {
        for (int j =1; j <= 12; j++) //internal loops (columns)
            cout << i * j << " ";

        cout << endl;
    }




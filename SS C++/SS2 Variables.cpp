#include <iostream>

using namespace std;
//Variables
//INITIALIZATION
//address
//allocate
//int, 4 bytes in memory. bits - 0 or 1

main()
{
    //first declare the type of variable then name(identifier)
    int A = 4; //declaring variables and assigning value to variables
    //A = 4;
    //equal sign allow us to assign value or called initialize
    //memory in our PC is not limited but depends on the hardware
    //A = 32522636262326 is too big for int memory

    //& ampersand
    //&name_of_variables

    cout << A << endl; //variables is something like container
    cout << &A << endl;

    A = 10;

    cout << A << endl;
    cout << &A;

    /*
        1. variables cant have the same name.
        2. variables cant start from the number.
        3. We can't use spaces.
        4. Our variables should be self-descriptive
        5. Variables cant be constructed of special characters keyword
        6. Variables should be nouns

    */
}

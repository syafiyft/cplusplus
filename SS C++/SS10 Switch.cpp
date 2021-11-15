#include <iostream>

using namespace std;

main()
{
    int x = 100; //we can only use integer and character for SWITCH
    /*
        4.1313113131313131 if we use double,
        4.1313131311313124 they are not same bcs of precision
        we also cant use string in SWITCH
    */

    //switch (variables)
    switch (x)
    {
        //cases
        case 'd': //d holds value 100 in ASCII Table
            cout << "this is a place for the instructions that will be executed if it is d @ 100";
            break;
        case 25:
            cout << "this is a place for the instructions that will be executed if it is 25";
            break;
        case 50:
            cout << "this is a place for the instructions that will be executed if it is 50";
            break;
        default: //when all cond is NOT MET
            cout << "this is a place for the instructions that will be executed if it is not equal to any case";

    }

}

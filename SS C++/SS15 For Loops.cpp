#include <iostream>
//LOOPS
using namespace std;

main()
{
    /*

    for (initialization; condition; inc/dec)
        instruction-to-repeat
    */

    /*for (int i = 0; i < 3; i++)
        cout << i << endl;

    cout << "lala" << endl;
    */

    int array[6];

    for (int i = 0; i < 6; ++i)
    // if we initiliaze i = 1, condition must be i <= 6 !!
    {
        array[i] = i;
        cout << array[i] << endl;
    }


    int a = 1;
    int b = 2;
    int c;
    c = ++a + b; //a is still 1. bcs its post.

    cout << c << " " << a << endl;


/*
        //INFINITE LOOP

    for (;;) //Bad PRACTICE
        cout << "lala" << endl;

*/
}

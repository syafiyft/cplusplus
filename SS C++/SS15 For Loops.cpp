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
    {
        array[i] = i;
        cout << array[i] << endl;
    }


/*
        //INFINITE LOOP

    for (;;) //Bad PRACTICE
        cout << "lala" << endl;

*/
}
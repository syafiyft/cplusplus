#include <iostream>

using namespace std;

main()
{
    const int SIZEOFARRAY = 10;
    int i = 0;
    int array[SIZEOFARRAY];

    //WHILE LOOP
    while(i < SIZEOFARRAY)
    {
        array[i] = 10 * i;
        cout << array[i] << endl;
        i++;

        //another way to write cout << array[i++] << endl;

    }

    //DO-WHILE LOOP
    do //execute first, check condition at while later. diff to while loop
    {
        cout << "lala";

    } while(i);


}

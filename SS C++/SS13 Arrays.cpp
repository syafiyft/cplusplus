#include <iostream>

using namespace std;
//ARRAYS

main()
{
    int a;

    int x[100];
    //it is okay to declare a BIGGER array
    //SIZE when assuming or before start putting value in it

    /*int a,b,c,d,e,f,g,h,i,j; takes a lot of time

    int x[] - in bracket, put size of array
    Array is series of element which MEANS
    they are next to each other, with increasing of same value
    like 2,4,6,8

    Array starts with index 0
    */

    int array[4]; //TYPE NAME [SIZE_No_Elements];

    array[0] = 10; //elements with index 0
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;
    //array [4] = 123214 //DOESNT EXISTS. MEMORY DONT HAVE SLOT FOR THISwont be save in memory bcs size is 4 not included this one

    /*
    HEXADECIMAL has 16 number
    0 1 2 3 4 5 6 7 8 9 a b c d e f

    hexadecimal to base 10
    1 2 a = 1 * 16 ^ 2 + 2 * 16 ^ 1 + a * 16 ^ 0 = 256 + 32 + 10 (a is 10) = 298
    */

    cout << "Array [0] = " << array[0] << ", address: " << &array[0] << endl;
    cout << "Array [1] = " << array[1] << ", address: " << &array[1] <<endl;
    cout << "Array [2] = " << array[2] << ", address: " << &array[2] <<endl;
    cout << "Array [3] = " << array[3] << ", address: " << &array[3] <<endl;

    //memory for value between slot is 4 bytes

    if (&array[1] == array) //bcs array start with index 0
        cout << "thats true";

    else
        cout << "index of array starts with 0!";

}

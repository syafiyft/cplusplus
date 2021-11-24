#include <iostream>

using namespace std;

/* IMAGINE

    For multidimensional array:

    rows - container
    columns - elements
*/
main()
{
    int biArray[3][4] = {0}; //int NAME [container][elements]
    //int biArray [2][3][2]; //MULTI ARRAYSS

    cout << &biArray[0] << endl;
    cout << &biArray[0][0] << endl;
    cout << &biArray[0][1] << endl;
    cout << &biArray[0][2]<< endl;
    cout << &biArray[0][3] << endl;
    cout << &biArray[1] << endl; //notice that this one got the same value to biArray[0]
    //bcs each time they enter new container/rows, the address will be reset to original
    cout << &biArray[1][0] << endl;
    cout << &biArray[1][1] << endl;
    cout << &biArray[1][2] << endl;



}


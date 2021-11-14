#include <iostream>

using namespace std;

//relational operator

main()
{
    int a = 10;
    int b = 5;

    cout << (a == b) << endl; //equaling
    //add parenthesis bcs computer will confuse with << and ==
    //result, 0 bcs its like boolean which is 10 isnt equal to 5. false

    cout << (a != b) << endl; //not equal
    //result 1, true.

    cout << (a > b) << endl; //true(1) when value a is bigger than b
    //result 1, true.

    cout << (a < b) << endl; //true(1) when value a is smaller than b
    //result 0, false.

    cout << (a >= b) << endl; //true(1) when value a is greater or equal than b
    //result 1, true.

    cout << (a <= b) << endl; //true(1) when value a is smaller or equal than b
    //result 0, false.

    cout << !(a == b) << endl; //a is not equal to b
    //result true




}

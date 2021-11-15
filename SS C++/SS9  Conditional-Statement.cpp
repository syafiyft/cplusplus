#include <iostream>

using namespace std;

//conditional statements //instructions

main()
{
    int a = 4, b = 20;

 /*   cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;
*/
    //if (condition/expression)
    if ( a > b )
        cout << a << " > " << b << endl;

    else if (a < b){ //here we use nested if, where there's another BUT when a cond is met
        cout << a << " < " << b << endl;
        if (a < 10)
            cout << "a is smaller than 10";
    }
    else
        cout << "that instruction will be executed ONLY if all of cond is met" << endl;
/*
    //4 is not bigger than 7 so false
    if (4 > 7) //brackets are used to group insturctions
    {
        cout << "something" << endl;
        cout << "test" << endl;
    }

    if (1231412414.2314)
        cout << "cond above is surely not equal to 0" << endl;

    if(( 7 < 4 || 0 < 10) && (10 == 9))
        cout << "7 < 4 || 0  10" << endl;



*/
}

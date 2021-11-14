#include <iostream>

using namespace std;

//operators
main()
{
    int a = 10;
    int b = 4; //changed from 5 to 4 to test division op.

    cout << a + b << endl; //addition operation
    cout << a - b << endl; //subtraction operation
    cout << a * b << endl; //multiplication
    cout << a / b << endl; //division
    //2.5(.5) is being removed bcs division is done in int
    //modulo op %
    //10 % 4 = 2 which is remainder or can use 10 - 8 = 2
    //1 % 5 = 1

    cout << a % b << endl;
    //incrementation - increase by 1
    //decrementation - decrease by 1

    int c = 1;

    c = c + 1;

    cout << "c is " << c << endl;

    //assignment operator

    c += 1; //same as c = c + 1;

    cout << c << endl;

    //other than that we have =, -=, %=, *=

    int d = 1;

    //post

    cout << d++ << endl; //++ here is increment operator (post increment)
    //post increment first increase the value in variable
    cout << d << endl; // then after we cout again, we can see its increment


    //pre

    int e = 5;

    cout << ++e << endl; //for pre, it will directly add value and cout

    cout << e << endl;
}

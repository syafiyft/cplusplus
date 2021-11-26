#include <iostream>
//OVERLOADING FX
using namespace std;

int power(int, int);
double power(double, int); // overloading can be same name for function but diff parameter
int main()
{
    cout << power(2.5 ,3) << endl; //2 ^ 3 @ we send 2 and 3 to the function power's parameter
    // if base entered is double, we will go to double fx
    return 0;
}

int power(int b, int e) //b base, e exponential . sent from main 2 and 3 into b and e.
{
    int tmp = b; //we need to allocate b to temp.
    while(e > 1)
    {
        b = b * tmp; // i,e 2 x 3
        e--; // e is exponent. then decrease by 1
    }
    return b;
}

double power(double b, int e) //function for double input. if they enter 2.5 as base. we will use this fx
{
    double tmp = b; //we need to allocate b to temp.
    while(e > 1)
    {
        b = b * tmp; // i,e 2 x 3
        e--; // e is exponent. then decrease by 1
    }
    return b;
}



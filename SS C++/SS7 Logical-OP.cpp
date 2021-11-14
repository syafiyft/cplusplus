#include <iostream>

using namespace std;

main()
{
    /*
        AND conjunction &&
        conjunction is true ONLY if both expression is true
        7 > 5 && 5 != 10

        expr1 expr2 result
        0       0       0
        0       1       0
        1       0       0
        1       1       1

        OR disjunction ||
        disjunction is true ONLY if EITHER expression is true
        both true also TRUE
        both false is FALSE

        expr1 expr2 result
        0       0       0
        0       1       1
        1       0       1
        1       1       1

        ! (exclamation mark) - NOT
        ! (0) the result will be 1
        ! (1) the result will be 0

    */

    cout << (5 > 7 && 5 != 10) << endl; //0 bcs 1 expression is NOT true

    cout << (5 > 7 || 5 != 10) << endl; //1 bcs either is True. or both can be true
    cout << !(5 > 7 || 5 != 10) << endl; //exclamation mark is NOT
}

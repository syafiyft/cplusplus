#include <iostream>

using namespace std;

main()
{
    /*
        0
        1
        0101 0110

        1 2 6 = 1 * 10 ^ 2 + 2 * 10 ^ 1 + 6 * 10 ^ 0 = 100 + 20 + 6
        we use 10 because it is used for

        1 0 1 0 = 1 * 2 ^ 3 + 0 * 2 ^ 2 + 1 * 2 ^ 1 + 0 * 2 ^ 0

        = 8 + 0 + 2 + 0 = 10

        1 0 1 1 0 0

        easier method:
        just ignore the place with 0

        so:

        1 0 1 1 0 0
        (we count from the right)

        2 ^ 2 + 2 ^ 3 + 2 ^ 5 = 4 + 8 + 32 = 44
    */

    /*

        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~ (tilde)
        Bitwise XOR - ^ (caret) eXclusive OR / eXclusive disjunction
        0 0 0
        0 1 1
        1 0 1
        1 1 1
        0 0 0
        Bitwise left shift <<
        Bitwise right shift >>
    */

    cout << (10 & 2) << endl;

    /*
        we know that it starts with power of 2 for places 1,2,4,8

        1 0 1 0 // 8 + 2 - 10
        0 0 1 0 // 2
        -------
        0 0 1 0 // result is 2
    */

    cout << (10 | 2) << endl;

    /*

        1 0 1 0 // 10
        0 0 1 0 // 2
        -------
        1 0 1 0 // result is 10
    */

    cout << (10 ^ 2) << endl; //XOR

      /*

        1 0 1 0 // 10
        0 0 1 0 // 2
        -------
        1 0 0 0 // result is 8
    */

    cout << (~10) << endl; //NOT
      /*
    this is kinda special because its like the value that is negative
    like this. if 10, answer will be -11.
        1 0 1 0
        0 1 0 1
    */

    cout << (10 << 2) << endl; //shift left
    //this thing means that we are multiplying 10 by 2 raise to the
    //power of 2
    /*
        000000000000000000000000000 1 0 1 0
        we increase the number
        20 - decimal notation
        40
    */




    //ALANILLA'S

    cout << (~10) << endl;

    /*
      As a bitwise NOT, its hard to explain
      but plainly accept it as taking the negative number
      after the integer.

      example if its ~12, answer will be -13

      so the answer for above cout is -11

    */

    /* Bitwise XOR (exclusive OR) operator '^' (called caret)

    its relation is as below

    expr1 expr2 result
      0     0     0
      0     1     1
      1     0     1
      1     1     0

    */

    cout << (10 ^ 2) << endl;

    //based on the relation given, we relate it with the above statement
    /*

        1 0 1 0
        0 0 1 0
        - - - -
        1 0 0 0    = answer is 8

    */

    //Bitwise left shift operator '<<'

    cout << (10 << 1) << endl;

    /*
    Binary is a large number, thus shifting to the left is shifting to the next zero

    before shifting         after shifting
    0 0 0 0 1 0 1 0         0 0 0 1 0 1 0 0

    answer will be 20 after shifting

    */

    cout << (10 << 3) << endl; //easy to say that we are multiplying 10 by 2^3
    //So simple math 10 x 2 ^ 3 is 80, thus answer is 80

    //Bitwise right shift operator '>>'

        cout << (10 >> 1) << endl;

    /*
    Binary is a large number, thus shifting to the right is shifting to the next zero

    before shifting         after shifting
    1 0 1 0 0 0 0 0         0 1 0 1 0 0 0 0

    answer will be 80 after shifting

    */

    cout << (10 >> 3) << endl; //easy to say that we are dividing 10 by 2^3

     //So simple math 10 / 2 ^ 3 is 80, thus answer is 1.25 or because its in integer, it'll be 1



}

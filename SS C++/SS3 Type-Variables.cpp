#include <iostream>

using namespace std;

main()

{
    //TYPE_OF_VARIABLE nameOfVariable;

    int a = 40, b = 0, c = 20;
    //we are allocating our address and reserve the place for other value
    //in b, the memory in it is already there // int b
    //-2 billions to 2 billions 4 BYTES

    cout << "a : " << a << " address : " << &a << endl;
    cout << "b : " << b << " address : " << &b << endl;
    cout << "c : " << c << " address : " << &c << endl;

    short t1 = 5; //-32768 to 32767, 2 BYTES / can also write short only or short int


    cout << t1 << endl;

    float t2 = 5.12; //4BYTES that are up to 38 zeros
    double t3 = 5.12; //8BYTES that are up to 308 zeros (greater precision)

    cout << t2 << endl;
    cout << t3 << endl;

    char t4; //character

    t4 = 'a';
    cout << t4 << endl;

    string t5 = "Hello World! :-)";

    cout << t5 << endl;

    string x = "part1";
    string y = "part2";
    string combinedString = x + " " + y;

    cout << combinedString << endl;
    //boolean | true or false
    //0 is ALWAYS false, 1 or other number IS true
    bool t6 = 0;

    cout << t6 << endl;

    //removing negative value using unsigned
    //for unsigned short int, 0 to 65535 (65535 is the sum of positive and negative number
    unsigned short int t7 = 3700;
    cout << t7 << endl;

    //USE OF CONSTANT @for CONST better use UPPERCASE ALL
    const string NAMEOFGAME = "Conqueror of C++";

    cout << NAMEOFGAME << endl;
    //NAMEOFGAME = "something"; //wont work cuz variable ady const

}

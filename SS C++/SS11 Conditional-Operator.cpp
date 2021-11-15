#include <iostream>

using namespace std;

main()
{
    int a = 50;
    int b = 20;
    // CONDITION ? so instruction that will be executed if cond it TRUE : if cond is NOT TRUE
    string message = (a > b) ? "a > b" : "a <= b";
    //NEW THING LEARNT^

    cout << ((a > b ? a : b) + 10)<< endl;
    //this mean that our cond is if 7 greater than 4
    //TRUE is 7, FALSE is 4
    //and the result btween them will be added with 10

}

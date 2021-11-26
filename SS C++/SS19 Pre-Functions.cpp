#include <iostream>

using namespace std;
//scope / range of variables

int globalVariable;


main()
{
    int localVariable;
/*
    cout << "value of globalVariable: " << globalVariable << endl;
    cout << "value of localVariable: " << localVariable << endl;

    int a = 10;

    if(a == 10)
    {
        int result = a * 10;

    }

    cout << result << endl; //result camt be access since its on another curly bracket

*/


    int nr, result = 0; //BEGINNER mistake, need to assign result = 0
    int i = 0; // to make sure that line 39 can access this one too.
    for(; i < 3; i++) //3,2,3 will the result be 8? NO
    {
        cout << "Enter " << (i + 1) << "number" << endl;
        cin >> nr;
        result += nr; //result = result + nr
    }

    cout << result << endl;
    cout << "we added " << i << " numbers" << endl;


}

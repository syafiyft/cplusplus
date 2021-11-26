#include<iostream>

using namespace std;
//FUNCTIONS

//DECLARATION OF FUNCTION
void welcome(); //in parenthesis we called it parameter @ procedure
bool isNumber();


main()
{
    welcome(); //CALL function
    string tmp; //if ask for integer, why use string? string are characters in ASCII

    cout << "Enter the number: " << endl;
    cin >> tmp;

    bool isNumber = true; //indicate true or false.

    if (tmp[0] == '0')
        isNumber = false; //hey this is not Number
    for (int i = 0; i < (tmp.length() && isNumber); i++) //tmp.length() - tmp is variable, length() is function and the . is connector
    {
        cout << tmp[i] << endl; //check all character entered
        if(!(tmp[i] >= 48 && tmp[i] <= 57)) // we used NEGATION ! //checking if set of number (IN DECIMAL) is between 0-9. i.e 48 is 0
        {
            isNumber = false;
            break;
        }
    }

    if (isNumber) //if TRUE
        cout << "Number entered properly " << endl;
    else //if FALSE
        cout << "Number wasn't entered properly" << endl;

    cout << "Enter the number: " << endl;
    cin >> tmp;

    isNumber = true; //indicate true or false.

    if (tmp[0] == '0')
        isNumber = false;
    for (int i = 0; i < (tmp.length()&& isNumber); i++) //tmp.length() - tmp is variable, length() is function and the . is connector
    {
        cout << tmp[i] << endl; //check all character entered
        if(!(tmp[i] >= 48 && tmp[i] <= 57)) // we used NEGATION ! //checking if set of number (IN DECIMAL) is between 0-9. i.e 48 is 0
        {
            isNumber = false;
            break;
        }
    }

    if (isNumber) //if TRUE
        cout << "Number entered properly " << endl;
    else //if FALSE
        cout << "Number wasn't entered properly" << endl;

}

void welcome() //void dont return anything
{
    cout << "Hello, welcome!" << endl;
}

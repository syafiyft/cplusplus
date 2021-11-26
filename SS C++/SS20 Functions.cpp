#include<iostream>

using namespace std;
//FUNCTIONS

//DECLARATION OF FUNCTION
void welcome(); //in parenthesis we called it parameter @ procedure
bool isNumber(string tmp); //can just write string
void enterName();
double add(double a, double b) {return a + b;}
void changeValueTo10(int x)
{
    x = 10;
}

int main()
{
    /*welcome(); //CALL function
    enterName();
    cout << add(4,5);
    */
    int a = 5;

    changeValueTo10(a); //we assigned a to x, x = a @ x = 5

    cout << a;

    return 0; //we can use main() w/o return 0;
}

void welcome() //void dont return anything
{
    cout << "Hello, welcome!" << endl;
}

bool isNumber(string tmp)
{
    //bool isNumber = true; //indicate true or false.

    if (tmp[0] == '0')
        return false; //hey this is not Number
    for (int i = 0; i < tmp.length(); i++) //tmp.length() - tmp is variable, length() is function and the . is connector
    {
        if(!(tmp[i] >= 48 && tmp[i] <= 57)) // we used NEGATION ! //checking if set of number (IN DECIMAL) is between 0-9. i.e 48 is 0

            return false;
    }

    return true;

}

void enterName()
{
    string tmp; //if ask for integer, why use string? string are characters in ASCII

    cout << "Enter the number: " << endl;
    cin >> tmp;


    if (isNumber(tmp)) //if TRUE
        cout << "Number entered properly " << endl;
    else //if FALSE
        cout << "Number wasn't entered properly" << endl;

}

#include <iostream>

using namespace std;

int main()
{
    int age = 21;

    // Tests the variable with "switch"
    switch(age){
    case 16: // in case age is 16
        cout << "Hey you can drive now!" << endl;
        break; // ends the switch
    case 18:
        cout << "Buy some lotto tickets" << endl;
        break;
    case 21:
        cout << "Buy me some beer" << endl;
    default: // if all cases fail
        cout << "Sorry, you get nothing" << endl;
    }
}

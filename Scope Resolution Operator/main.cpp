#include <iostream>

using namespace std;

int bacon = 69; //global variable

int main()
{
    int bacon = 25; // local variable
    cout << ::bacon << endl; // :: uses global variable instead of local variable
    return 0;
}

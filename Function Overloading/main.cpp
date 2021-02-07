#include <iostream>

using namespace std;

//function overloading helps user pass different data types

void printNumber(int x){
    cout << "Prints an integer: " << x << endl;
}

void printNumber(float x){
    cout << "Now, printing a float: " << x << endl;
}

int main()
{
    int a = 55;
    float b = 33.4234;

    printNumber(a);
    printNumber(b);


    return 0;
}

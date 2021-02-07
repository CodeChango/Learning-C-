#include <iostream>
#include <cstdlib> // include random header
#include <ctime>   // include time for effective random numbers
using namespace std;

int main()
{
    // srand changes algorithm a bit
    // "time(0)" calculates the second since ~ 1970
    srand(time(0));


    // Throwing a dice
    for(int x = 1; x < 25; x++)
    {
        cout << 1 + (rand()%6) << endl;
    }


    return 0;
}

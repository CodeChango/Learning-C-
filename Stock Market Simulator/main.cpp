#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a; // amount
    float p = 10000; // principle amount
    float r = .01; // rate, interest earned each day

    //starts at day 1, invests for 30 days
    for(int day = 1; day <= 30; day++){
        a = p * pow(1+r, day);
        cout << day << "-------" << a << endl;
    }

    return 0;
}

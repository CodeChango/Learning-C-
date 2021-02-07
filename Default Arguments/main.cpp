#include <iostream>

using namespace std;

int volume(int l = 1, int w = 1, int h = 1); //Prototyping the function

int main()
{
    // will run defaults if user does not input values
    cout << volume(2,3,4); // changes length, width, and height
    return 0;
}

int volume(int l, int w, int h){
    return l * w * h;
}

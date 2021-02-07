#include <iostream>

//Recursion requires a "base case"/ end point

using namespace std;

int factorialFinder(int x){
    if(x==1){
        return 1; // getting to one allowed the rest of the answers
    }else{
        return x*factorialFinder(x-1);
    }
}

int main()
{
    cout << factorialFinder(5) << endl;
    return 0;
}

#include <iostream>

using namespace std;

int addNumbers (int x, int y, int z){
    int answer = x + y + z;
    return answer;
}

int main()
{
    cout << addNumbers(2,2,2);
    return 0;
}

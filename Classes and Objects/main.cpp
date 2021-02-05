#include <iostream>

using namespace std;

class myClass{
    public:
        void memorableLine(){
            cout << "They" << endl;
            }
};

int main()
{
    myClass myObject;
    myObject.memorableLine();
    return 0;
}

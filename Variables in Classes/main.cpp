#include <iostream>
#include <string>

using namespace std;

// Build a public function to access private variables

class myClass{
    public:
        void setName(string x){
            name = x;
        }
        string getName(){
        return name;
        }
    private:
        string name;
};

int main()
{
    // object.separator function
    myClass className;
    className.setName("Crypto");
    cout << className.getName();
    return 0;
}

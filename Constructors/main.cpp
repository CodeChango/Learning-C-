#include <iostream>
#include <string>
// having variables and wanting to set them
//to values initially
using namespace std;

class myClass{
    public:
        myClass(string y){
        //cout << "Instant execution of constructor";
        setName(y);
        }
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
    // goes into y, then x, then name
    myClass classObject("They...");
    cout << classObject.getName();

    myClass classObject2("they did this to the both of us");
    cout << classObject2.getName();
    return 0;
}

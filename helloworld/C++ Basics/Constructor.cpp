/* Constructors
A constructor in C++ is a special method that is
automatically called when an object of a class is created.
To create a constructor, use the same name as the class,
followed by parentheses ():
The constructor has the same name as the class, 
it is always public, and it does not have any return value.
*/

#include <iostream>
using namespace std;
class box{
    public:
    int length, breadth;
    
    box(){  // This is Construtor same as Class Name
        cout<<"Constructor is executed."<<endl;
    }
};

class student{
    public:
    int std, age, roll;

   student() {   // Constructor 
        std = 5;
   }
};

int main(){
   box b1; 

    student herry;
    // herry.std=5;
    // herry.age=9;
    // herry.roll=40;

    // cout<<herry.std<<" "<<herry.age<<" "<<herry.roll<<endl;
    cout<<"class is : "<<herry.std<<endl;
    
    student raj;
    raj.roll = 23;
    raj.age = 12;

    cout<<raj.std<<endl;
    cout<<raj.age<<endl;
    cout<<raj.roll<<endl;
}
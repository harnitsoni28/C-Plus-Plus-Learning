#include <iostream>
using namespace std;

class student{ // blueprint for creating object
    public: // access specifier --> private & protected
      string name;
      int age;
      int roll;
};  // necessary semi colon
 
 class box{
     public:
     int l,b,h;
 };

int main(){
   student person1; // class --> object 
   person1.name="Herry"; // .operator --> access use
   person1.age=23;
   person1.roll=8;

cout<<person1.name<<endl;

  student person2;
  person2.name="Jai";
  person2.age=23;
  person2.roll=69;

  cout<<person2.age<<endl;
  cout<<person2.name<<endl;
  cout<<person2.roll<<endl;


   box box1;
   box1.l=5;
   box1.b=3;
   box1.h=7;

   int volume=box1.l * box1.b * box1.h;
   cout<<"Volume of box : "<<volume;

}
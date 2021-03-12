#include <iostream>
using namespace std;
  class student{
      public:
      string name;
      int age;

      void display(){
          cout<<name<<endl<<age;
      }
  };
int main(){
    student student1;
    student1.name="Herry";
    student1.age=22;
    student1.display();
    
}
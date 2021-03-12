#include <iostream>
using namespace std;
class complex{
    public:
    int a,b;
    public:
    complex(int x, int y){ //Constructor basically --> function
        a=x; b=y;
        }
        complex(){} // Default Constructor   
       
        complex(int x){ // Paramitrized Constructor
         a=x;
        }
};

class box{
    public:
    int a;
    
    box(int x){ // Paramitrized Constructor
        a=x;
    }

    box(){} // Default Constructor   
};

class box{
    public:
    int len;
     
     void set_data(int x); // function define
     /*
     void set_data(int x){
         len = x;
     }
     */
    
};
// return type  class_name :: function_name  declare

void box :: set_data(int x){
    len = x;
}

int main(){
    complex c1(2,3);
    complex c2;
    complex c3(3);

    // box b1(4);
    // box b2;
    box b1;
    b1.set_data(3);
}
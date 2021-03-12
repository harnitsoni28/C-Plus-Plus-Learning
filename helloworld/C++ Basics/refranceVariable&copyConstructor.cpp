#include <iostream>
using namespace std;

/*int main(){
    int x =4;
    int &y =x;     // y --> refrance variable
    y++;           // we can increase value through refrance variable
cout<<y<<endl;
cout<<x<<endl;
cout<<&y<<endl;
cout<<&x<<endl; 
}*/

class complex{
    public:
    int a,b;
    public:
    complex(int x, int y){ // Constructor basically --> function
        a=x; b=y;
        }
        complex(int x){ // Paramitrized Constructor
         a=x;
        }
        complex(){} // Default Constructor 

        complex (complex &c1){ // Copy Constructor  
           a=c1.a; // = is a assignment operator
           b=c1.b;
        }
};
int main(){
    complex c1(2,3);
    complex c2(c1); // copy c1 into c2
    cout<<c2.a<<" "<<c2.b<<endl;
}
#include <iostream>
using namespace std;
int main(){
    int a=5;

    int *p; // pointer variable
     p= &a; // storing address of a in p
     
     // p --> address of variable
     // *p --> value of data present  on that address
   
   cout<<"address of a : "<<p<<endl;
   cout<<"value present at that address : "<<*p<<endl;
   cout<<&p<<endl;
}
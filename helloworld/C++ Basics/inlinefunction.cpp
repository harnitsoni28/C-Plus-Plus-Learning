#include <iostream>
using namespace std;

/*
The inline functions are a C++ enhancement 
feature to increase the execution time of a program.
Functions can be instructed to compiler to make
them inline so that compiler can replace those 
function definition wherever those are being called. 
Compiler replaces the definition of inline functions at 
compile time instead of referring function definition at runtime.
*/

 inline int add(int x, int y){ // To make function inline, start its with the keyword “inline”.
      return x+y;
  }

int main(){
 int a,b; cin>>a>>b;
 int result =add(a,b);
 cout<<result;
}
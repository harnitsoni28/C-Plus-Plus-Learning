#include <iostream>
using namespace std;
int add(int a, int b, int c=0, int f=0, int h=0){ // Default argument - default value provided for function parameter.
    return a+b+c+f+h;
}
int multy(int a, int b, int c=1, int f=2, int h=4){ // Default argument
    return a*b*c*f*h;
}
/* int add(int a, int b, int c){
   return(a+b+c);
 } */

int main(){
int a, b, c; cin>>a>>b>>c;
int result = add(a,b,c,8);
cout<<result<<endl;

int result1 =multy(a,b,c,8);
cout<<result1;


}
#include <iostream>
using namespace std;

 // Function declaretion
// int maximum(int a,int b);

int maximum(int a,int b){
    if(a>b)
        return a;
    else 
        return b;
}

int main(){
  int c= maximum(5,6);
  cout<<"Bigger Number : "<<c<<endl;

}
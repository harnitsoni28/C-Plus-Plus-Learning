#include <iostream>
using namespace std;

float area(float b,float h){
    return 0.5*(b*h);
}

int main(){
    float b,h; cin>>b>>h;
   float a_Tringle= area(b,h);
   cout<<a_Tringle<<endl;
}
#include <iostream>
using namespace std;

int add(int no1,int no2); // function declaration 
int add(int no1,int no2){ // function define
    return no1+no2; // function call
}

int sub(int no1,int no2);
int sub(int no1,int no2){
    return no1-no2;
}

void pattern(){
    cout<<"Hey Baby"<<endl;
}

int main(){
    cout<<"Enter two no. : "<<endl;
    int a,b; 
    cin>>a>>b;
    int result = add(a,b);
    cout<<"Sum of two no : "<<result<<endl;
    int ans = sub(a,b);
    cout<<"Substract of two no : "<<ans<<endl;
    pattern(); // cout<<pattern();<<endl will not work 
}
#include <iostream>
using namespace std;
class complex{
    public:
    int a,b;
    complex(){
       cout<<"Hi ! i am Constructor"<<endl;
    }
    ~complex(){
       cout<<"Bye ! i am Destructor"<<endl; 
    }

    void set_data(int x,int y){
        a=x; b=y;
    }
    void show_data(){
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
    }
};

class box{
    public:
    int a;
    ~box(){
        cout<<"Bye i am box"<<endl;
    }
};

int main(){
    complex c1;
    c1.set_data(2,3);
    c1.show_data();
    complex c2;
    box b1;
}
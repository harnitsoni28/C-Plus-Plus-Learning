#include <iostream>
using namespace std;
/* class amount{
    public:
    int balance;
    static int roi;

    void set_data(int x){
        balance=x;
    }
}; */

 class amount{
  private:
    int balance; // instance member variable
    static int roi; // static member variable
    
  public:
    void set_data(int x){
        balance = x;
    }

    void display(){
        balance = balance + roi + 0.01 *balance;
        cout<<balance;
    }
};

int amount :: roi= 2; // :: scope resolution operater

int main(){
    // static int a; // Default value --> 0
    // int b;
    // cout<<a<<" "<<b<<endl; // a=0 b=random value from memory
    amount a1;
    // a1.balance = 25000;
    a1.set_data(25000);
    a1.display();

}
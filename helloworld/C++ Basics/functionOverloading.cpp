// #include <iostream>
// using namespace std;

// int area(int a, int b){
//     return a*b;
// }

// int main(){
//     int length, breadth;
//     cout<<"Enter len and bre of rectangle : "<<endl;
//     cin>>length>>breadth;
    
//     int a_rec = area(length, breadth);
//     cout<<"Area of rectangle : "<<a_rec<<endl;
// }


#include <iostream>
using namespace std;

float area(int a){
    return 3.14*a*a;
}

int main(){
    int r;
    cin>>r;
    float a_rec =area(r);
    cout<<"Area of circle is : "<<a_rec<<endl;

}
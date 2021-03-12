#include <iostream>
using namespace std;
int main(){
	cout<<"Enter the money :"<<endl;
    int x;
	cin>>x;

	// ternary operator

	//return variable = condition ? true value : false value
   
    /*
    int w = (x>=10) ? 1 : 0;
    cout<<"result will be : "<<w<<endl;
	*/

     int w = (x>=10) ? x+5 : x-5;
    cout<<"result will be : "<<w<<endl;
}
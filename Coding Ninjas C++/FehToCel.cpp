#include <iostream>
using namespace std;
int main(){
    int s,e,w,c;
    cin>>s>>e>>w;
    for(int i=s; i<=e; i+=w){
        c=(i-32)/1.8;
        cout<<i<<"\t"<<c<<endl;
    }
}
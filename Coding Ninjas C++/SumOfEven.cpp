#include <iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
int evenSum=0;
    for(i=1; i<=n; i++)
      if(i%2==0){
        evenSum = evenSum+i;
      }
      cout<<evenSum<<endl;
}
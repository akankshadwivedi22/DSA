#include <iostream>
using namespace std;

 int main() {
int n,r;
int sumodd=0;
int sumeven=0;
cin>>n;

while(n>0){
r= n%10;
n=n/10;
if(r%2==0){
sumeven=sumeven+r;
  }
 else{
sumodd=sumodd+r;
       }
 r=r/10;
 }
 cout<<sumeven<<" "<<sumodd<<endl;

   return 0;

}
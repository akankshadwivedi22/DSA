
#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"enter a number ";
   cin>>n;
   int reverse=0;
   
   while(n>0){
       int lastdigit = n%10;          //koi bhi n % karoge ko toh last digit hi aaega
       reverse= reverse*10+lastdigit;   // suppose last digit is 4 toh 4*10 + 3= 4 3
       n=n/10;
   }
   
   cout<<"reverse is "<<reverse;
   
    return 0;
}

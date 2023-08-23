#include<math.h>
#include <iostream>
using namespace std;

//armstrong number is a number jinka sum of cube of each digit is same as the original no ex-153= 1+125+27=153

int main()
{
   int n;
   cout<<"enter a number ";
   cin>>n;
   int temp=n;
   int sum=0;
   
   while(n>0){
       int lastdigit = n%10;          
       sum= sum+pow(lastdigit, 3);   
       n=n/10;
   }
   if(sum==temp){
   cout<<"armstrong";
   }
   else{
       cout<<"not";
   }
   
    return 0;
}

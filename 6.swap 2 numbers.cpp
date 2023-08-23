#include<iostream>
using namespace std;
int main ()
{
    
int a,b;
cout<<"enter a and b: ";
cin>>a>>b;
int temp;
temp=a;
a=b;
b=temp;
cout<<a<<" "<<b;
    return 0;
}
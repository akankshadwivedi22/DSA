
#include <iostream>

using namespace std;

int main()
{
    int n, sum=0,r,temp;  //4 var
    cout<<"enter the number";
    cin>>n;
    
    temp=n;
    while(n>0){
        r=n%10;   //n,sum,n    r and n same hai bas % se /   sum mai (sum*10)+r    r a s a n a
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
    
    
    }
    
   
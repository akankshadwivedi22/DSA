#include <iostream>
using namespace std;
//sum of n even natural numbers
//agar %2!=0 kiye toh n odd numbers
//and if condition hatae toh sum on n natural numbers
int main() {
    int n;
    cin>>n;
    if(n%2==0){
    int sum=(n*(n+1))/2;
    cout<<sum;
    }
    else{
        cout<<"odd";
    }
    return 0;
}



//N NATURAL NUMBER

/*
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum =sum+ i;
    }

    cout << "Sum = " << sum;
    return 0;
}
*/ 





//N EVEN NUMBER
/*#include <iostream>

using namespace std;

int main() {

    int i, n, sum = 0;

    // Take input from user.
    cout << "Print sum of even numbers till : ";
    cin >> n;

    for(i = 1; i <= n; i++) {

        // Check for even or not.
        if((i % 2) == 0) {

            sum += i;

        }
    }

    cout << endl << "Sum of even numbers from 1 to " << n << " is : " << sum;

    return 0;
}*/



// N ODD NUMBER
/*#include <iostream>

using namespace std;

int main() {

    int i, n, sum = 0;

    // Take input from user.
    cout << "Print sum of even numbers till : ";
    cin >> n;

    for(i = 1; i <= n; i++) {

        // Check for even or not.
        if((i % 2) != 0) {

            sum += i;

        }
    }

    cout << endl << "Sum of even numbers from 1 to " << n << " is : " << sum;

    return 0;
}*/
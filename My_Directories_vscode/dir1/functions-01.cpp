#include <iostream>
using namespace std;

int factorial(int num) {
    int factorial = 1;
    for (int i = 2; i <= num; i++)
    {   
        factorial *= i;
    }
    return factorial;
} 

int main() {
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;

    cout<<"\nThe factorial of the given number is: " << factorial(n) 
    << " & The factorial of 6 is: " << factorial(6) << endl;
    return 0;
}
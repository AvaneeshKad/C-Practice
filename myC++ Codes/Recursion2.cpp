#include <iostream>
using namespace std;

//Calculating a huge number's factorial value 
//Difference between Head Recursion and Tail Recursion
//For this example, I am going to use Tail recursion because it more efficient
unsigned long long factorial(int n, unsigned long long accumulator = 1) {
    if (n == 0 || n == 1) {
        return accumulator;
    }
    else {
        return factorial(n-1, n * accumulator); //tail recursion using accumulator

    }
}

int main() {
    int num;
    cout<<"Enter an integer to find its factorial value (Upto 65 only): ";
    cin>>num;
    cout<<factorial(num)<<"\n";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5){
        cout<<"Iteration : "<<i<<"\n";
        i++;
    }


    // differet loop : do while

    int x = 10;

    do {
        cout<<"This will print once even though 10 is not less than 5."<<"\n";
    } while(x < 5);
    return 0;
}
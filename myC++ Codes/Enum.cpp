#include <iostream>
using namespace std;

enum Example {
    A, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main() {
    Example value = B;
    if (value == 1) {
        cout<<"Thats correct"<<"\n";
    }
}
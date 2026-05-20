#include <iostream>
using namespace std;

void counter() {
    int N = 100;
    N++;
    cout<<N<<"\n";
}

int main() {
    for (int i = 0;i < 5;i++) {
        counter();
    }
    return 0;
}
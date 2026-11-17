#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> x = {10, 20 ,30 ,40 ,50 ,60};

    x.push_back(90);
    cout <<"The capacity this vector is taking is : "<< x.capacity()<<"\n";
    cout <<"The size this vector is : "<< x.size()<<"\n";

    return 0;
}
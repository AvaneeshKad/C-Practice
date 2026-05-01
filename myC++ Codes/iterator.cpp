#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> mySet = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    auto itStart = mySet.lower_bound(5);
    auto itEnd = mySet.upper_bound(30);
    mySet.erase(itStart, itEnd);
    cout << *itEnd << "\n";
    auto zeroFind = mySet.find(0);
    cout << &zeroFind << "\n";

    // printing the actual set after going the operations on it

    for (int x : mySet) {
        cout << x << " ";
    }
    cout << "\n";
}

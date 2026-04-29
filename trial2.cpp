#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> mySet;
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(20);
    mySet.insert(5);

    cout << "Set Elements :";
    for (int x : mySet) {
        cout << x << " ";
    }
    cout << endl;

    if (mySet.find(10) != mySet.end()) {
        cout << "10 is in the set!" << endl;
    }
    mySet.erase(5);
    return 0;
}

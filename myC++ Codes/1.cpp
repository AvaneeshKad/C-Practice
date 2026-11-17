#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Write name of favorite super-hero : ";
    cin >> name;
    if (name == "Hulk") {
        cout << "Good Choice!" << endl;
    } else {
        cout << "Meh" << endl;
    }

    return 0;
}

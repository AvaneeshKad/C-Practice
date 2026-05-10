#include <iostream>
using namespace std;

// This function calls itself until Numbers reaches 0
void RecursiveSubtract(int Numbers) {
    // 1) Base Case: Stop when we hit 0
    if (Numbers < 1) {
        return; 
    }
    // 2. Action: Print the current number
    cout << Numbers << " ";
    // 3. Recursive Step: Call the function again with (Numbers - 1)
    RecursiveSubtract(Numbers - 1);
}

int main() {
    int n;
    cout << "Enter a starting number: ";
    cin >> n;
    cout << "Counting down: ";
    RecursiveSubtract(n);
    cout<<endl;
    return 0;
}

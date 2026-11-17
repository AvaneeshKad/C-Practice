#include <fstream>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> wordSet;
    string word;

    ifstream file("/usr/share/dict/words");
    if (!file.is_open()) {
        cerr << "Dictionary still missing!" << endl;
        return 1;
    }

    while (file >> word) {
        wordSet.insert(word);
    }
    cout << "Total unique words: " << wordSet.size() << endl;

    string target;
    cout << "Enter your desired word : ";
    cin >> target;

    if (wordSet.find(target) != wordSet.end()) {
        cout << "'" << target << "' Found in the Dictionary" << endl;
    } else {
        cout << "The target word is not present in the Dictionary!" << endl;
    }
    return 0;
}

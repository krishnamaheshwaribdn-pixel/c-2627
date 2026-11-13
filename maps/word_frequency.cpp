#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence = "red blue red green blue red";
    map<string, int> frequency;
    istringstream words(sentence);
    string word;

    while (words >> word) {
        ++frequency[word];
    }

    for (const auto& entry : frequency) {
        cout << entry.first << ": " << entry.second << '\n';
    }
}

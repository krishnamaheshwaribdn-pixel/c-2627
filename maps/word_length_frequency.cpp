#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence = "Maps can count word lengths";
    istringstream words(sentence);
    map<size_t, int> lengthFrequency;
    string word;

    while (words >> word) {
        ++lengthFrequency[word.size()];
    }

    for (const auto& entry : lengthFrequency) {
        cout << entry.first << " letters: " << entry.second << " word(s)\n";
    }
}

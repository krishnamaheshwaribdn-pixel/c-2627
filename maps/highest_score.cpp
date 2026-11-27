#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> scores = {
        {"Asha", 92},
        {"Ravi", 85},
        {"Mina", 96}
    };

    auto highest = scores.begin();
    for (auto current = scores.begin(); current != scores.end(); ++current) {
        if (current->second > highest->second) {
            highest = current;
        }
    }

    cout << highest->first << " has the highest score: "
         << highest->second << '\n';
}

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

    scores.erase("Ravi");

    for (const auto& entry : scores) {
        cout << entry.first << ": " << entry.second << '\n';
    }
}

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> scores = {
        {"Asha", 92},
        {"Ravi", 85},
        {"Mina", 96}
    };

    for (const auto& entry : scores) {
        cout << entry.first << " scored " << entry.second << '\n';
    }
}

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> students = {
        {101, "Asha"},
        {102, "Ravi"},
        {103, "Mina"}
    };
    map<string, int> idsByName;

    for (const auto& entry : students) {
        idsByName[entry.second] = entry.first;
    }

    for (const auto& entry : idsByName) {
        cout << entry.first << ": " << entry.second << '\n';
    }
}

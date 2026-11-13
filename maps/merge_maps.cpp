#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> first = {{"apples", 3}, {"oranges", 2}};
    map<string, int> second = {{"oranges", 4}, {"pears", 5}};

    for (const auto& entry : second) {
        first[entry.first] += entry.second;
    }

    for (const auto& entry : first) {
        cout << entry.first << ": " << entry.second << '\n';
    }
}

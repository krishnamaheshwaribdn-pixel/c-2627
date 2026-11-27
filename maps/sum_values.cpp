#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> prices = {
        {"book", 12},
        {"pen", 3},
        {"notebook", 8}
    };
    int total = 0;

    for (const auto& entry : prices) {
        total += entry.second;
    }

    cout << "Total: " << total << '\n';
}

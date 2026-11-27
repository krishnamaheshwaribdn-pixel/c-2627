#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "C++ makes programming fun";
    string searchText = "programming";
    size_t position = text.find(searchText);

    if (position != string::npos) {
        cout << "Found at index " << position << '\n';
    } else {
        cout << "Not found\n";
    }
}

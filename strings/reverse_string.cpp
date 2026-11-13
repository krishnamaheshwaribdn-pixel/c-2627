#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "program";

    for (int left = 0, right = static_cast<int>(text.size()) - 1;
         left < right; ++left, --right) {
        char temporary = text[left];
        text[left] = text[right];
        text[right] = temporary;
    }

    cout << "Reversed string: " << text << '\n';
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "level";
    bool isPalindrome = true;

    for (int left = 0, right = static_cast<int>(text.size()) - 1;
         left < right; ++left, --right) {
        if (text[left] != text[right]) {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "Palindrome\n" : "Not a palindrome\n");
}

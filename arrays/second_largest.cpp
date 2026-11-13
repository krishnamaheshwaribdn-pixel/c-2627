#include <iostream>
using namespace std;

int main() {
    int values[] = {12, 7, 25, 18, 25};
    int size = sizeof(values) / sizeof(values[0]);
    int largest = values[0];
    int secondLargest = values[0];
    bool hasSecondLargest = false;

    for (int i = 1; i < size; ++i) {
        if (values[i] > largest) {
            secondLargest = largest;
            largest = values[i];
            hasSecondLargest = true;
        } else if (values[i] < largest &&
                   (!hasSecondLargest || values[i] > secondLargest)) {
            secondLargest = values[i];
            hasSecondLargest = true;
        }
    }

    if (hasSecondLargest) {
        cout << "Second largest distinct value: " << secondLargest << '\n';
    } else {
        cout << "There is no second distinct value.\n";
    }
}

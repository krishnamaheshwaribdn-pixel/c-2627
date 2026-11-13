#include <iostream>
using namespace std;

class Queue {
    static const int capacity = 5;
    int values[capacity];
    int frontIndex = 0;
    int rearIndex = -1;

public:
    bool enqueue(int value) {
        if (rearIndex == capacity - 1) {
            return false;
        }
        values[++rearIndex] = value;
        return true;
    }

    bool dequeue(int& value) {
        if (frontIndex > rearIndex) {
            return false;
        }
        value = values[frontIndex++];
        return true;
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    int value;
    if (queue.dequeue(value)) {
        cout << "Removed: " << value << '\n';
    }
}

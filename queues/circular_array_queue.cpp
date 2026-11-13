#include <iostream>
using namespace std;

class CircularQueue {
    static const int capacity = 5;
    int values[capacity];
    int frontIndex = 0;
    int size = 0;

public:
    bool enqueue(int value) {
        if (size == capacity) {
            return false;
        }
        int rearIndex = (frontIndex + size) % capacity;
        values[rearIndex] = value;
        ++size;
        return true;
    }

    bool dequeue(int& value) {
        if (size == 0) {
            return false;
        }
        value = values[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        --size;
        return true;
    }
};

int main() {
    CircularQueue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    int value;
    if (queue.dequeue(value)) {
        cout << "Removed: " << value << '\n';
    }
}

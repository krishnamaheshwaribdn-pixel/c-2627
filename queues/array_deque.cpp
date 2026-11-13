#include <iostream>
using namespace std;

class Deque {
    static const int capacity = 5;
    int values[capacity];
    int size = 0;

public:
    bool pushFront(int value) {
        if (size == capacity) {
            return false;
        }
        for (int i = size; i > 0; --i) {
            values[i] = values[i - 1];
        }
        values[0] = value;
        ++size;
        return true;
    }

    bool pushBack(int value) {
        if (size == capacity) {
            return false;
        }
        values[size++] = value;
        return true;
    }

    bool popFront(int& value) {
        if (size == 0) {
            return false;
        }
        value = values[0];
        for (int i = 1; i < size; ++i) {
            values[i - 1] = values[i];
        }
        --size;
        return true;
    }

    bool popBack(int& value) {
        if (size == 0) {
            return false;
        }
        value = values[--size];
        return true;
    }
};

int main() {
    Deque deque;
    deque.pushFront(20);
    deque.pushBack(30);
    deque.pushFront(10);
    int value;
    if (deque.popBack(value)) {
        cout << "Removed from back: " << value << '\n';
    }
}

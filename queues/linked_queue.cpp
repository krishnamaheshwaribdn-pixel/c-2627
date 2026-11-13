#include <iostream>
using namespace std;

class Queue {
    struct Node {
        int value;
        Node* next;
        explicit Node(int item) : value(item), next(nullptr) {}
    };
    Node* frontNode = nullptr;
    Node* rearNode = nullptr;

public:
    ~Queue() {
        int value;
        while (dequeue(value)) {}
    }

    void enqueue(int value) {
        Node* node = new Node(value);
        if (rearNode == nullptr) {
            frontNode = rearNode = node;
        } else {
            rearNode->next = node;
            rearNode = node;
        }
    }

    bool dequeue(int& value) {
        if (frontNode == nullptr) {
            return false;
        }
        Node* removed = frontNode;
        value = removed->value;
        frontNode = frontNode->next;
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        delete removed;
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

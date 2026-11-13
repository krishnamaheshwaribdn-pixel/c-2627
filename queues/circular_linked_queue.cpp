#include <iostream>
using namespace std;

class CircularQueue {
    struct Node {
        int value;
        Node* next;
        explicit Node(int item) : value(item), next(nullptr) {}
    };
    Node* rearNode = nullptr;

public:
    ~CircularQueue() {
        int value;
        while (dequeue(value)) {}
    }

    void enqueue(int value) {
        Node* node = new Node(value);
        if (rearNode == nullptr) {
            node->next = node;
        } else {
            node->next = rearNode->next;
            rearNode->next = node;
        }
        rearNode = node;
    }

    bool dequeue(int& value) {
        if (rearNode == nullptr) {
            return false;
        }
        Node* frontNode = rearNode->next;
        value = frontNode->value;
        if (frontNode == rearNode) {
            rearNode = nullptr;
        } else {
            rearNode->next = frontNode->next;
        }
        delete frontNode;
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

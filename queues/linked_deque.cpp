#include <iostream>
using namespace std;

class Deque {
    struct Node {
        int value;
        Node* previous;
        Node* next;
        explicit Node(int item) : value(item), previous(nullptr), next(nullptr) {}
    };
    Node* frontNode = nullptr;
    Node* backNode = nullptr;

    bool removeNode(Node* node, int& value) {
        if (node == nullptr) {
            return false;
        }
        value = node->value;
        if (node->previous != nullptr) {
            node->previous->next = node->next;
        } else {
            frontNode = node->next;
        }
        if (node->next != nullptr) {
            node->next->previous = node->previous;
        } else {
            backNode = node->previous;
        }
        delete node;
        return true;
    }

public:
    ~Deque() {
        int value;
        while (popFront(value)) {}
    }

    void pushFront(int value) {
        Node* node = new Node(value);
        node->next = frontNode;
        if (frontNode != nullptr) {
            frontNode->previous = node;
        } else {
            backNode = node;
        }
        frontNode = node;
    }

    void pushBack(int value) {
        Node* node = new Node(value);
        node->previous = backNode;
        if (backNode != nullptr) {
            backNode->next = node;
        } else {
            frontNode = node;
        }
        backNode = node;
    }

    bool popFront(int& value) {
        return removeNode(frontNode, value);
    }

    bool popBack(int& value) {
        return removeNode(backNode, value);
    }
};

int main() {
    Deque deque;
    deque.pushFront(20);
    deque.pushBack(30);
    int value;
    if (deque.popFront(value)) {
        cout << "Removed from front: " << value << '\n';
    }
}

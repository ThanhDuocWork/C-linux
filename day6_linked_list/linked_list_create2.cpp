#include <iostream>

struct Node {
    int data;
    Node* link;
};

int main() {
    Node* head = NULL;
    Node* current = NULL;

    for (int i = 1; i <= 100; i++) {
        Node* newNode = new Node;
        newNode->data = i;
        newNode->link = NULL;

        if (head == NULL){
            head = newNode;
            current = newNode;
        } else {
            current->link = newNode;
            current = newNode;
        }
    }

    // Truy cập và in ra dữ liệu của các node
    current = head;
    while (current != NULL) {
        std::cout << "Node data: " << current->data << std::endl;
        current = current->link;
    }

    // Giải phóng bộ nhớ
    current = head;
    Node* nextNode;
    while (current != NULL) {
        nextNode = current->link;
        delete current;
        current = nextNode;
    }

    return 0;
}
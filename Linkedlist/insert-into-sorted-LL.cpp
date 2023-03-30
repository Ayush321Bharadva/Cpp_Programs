#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

struct LinkedList {
    Node* head;
    
    LinkedList() {
        this->head = nullptr;
    }
    
    void addNode(int data) {
        Node* node = new Node(data);
        if (this->head == nullptr) {
            this->head = node;
        } else {
            Node* curr = this->head;
            while (curr->next != nullptr) {
                curr = curr->next;
            }
            curr->next = node;
        }
    }
    
    void addElement(int data) {
        Node* newNode = new Node(data);
        if (this->head == nullptr) {
            this->head = newNode;
        } else if (data < this->head->data) {
            newNode->next = this->head;
            this->head = newNode;
        } else {
            Node* curr = this->head;
            while (curr->next != nullptr && curr->next->data < data) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }
    
    void printList() {
        Node* curr = this->head;
        while (curr != nullptr) {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.addNode(1);
    list.addNode(3);
    list.addNode(5);
    cout << "Original list: ";
    list.printList();
    
    list.addElement(4);
    cout << "List after adding 4: ";
    list.printList();
    
    list.addElement(0);
    cout << "List after adding 0: ";
    list.printList();
    
    list.addElement(6);
    cout << "List after adding 6: ";
    list.printList();
    
    return 0;
}

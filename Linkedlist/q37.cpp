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
    
    void sortList() {
        Node* curr = this->head;
        while (curr != nullptr) {
            Node* innerCurr = curr->next;
            while (innerCurr != nullptr) {
                if (curr->data > innerCurr->data) {
                    int temp = curr->data;
                    curr->data = innerCurr->data;
                    innerCurr->data = temp;
                }
                innerCurr = innerCurr->next;
            }
            curr = curr->next;
        }
    }
    
    void printList() {
        Node* curr = this->head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.addNode(3);
    list.addNode(2);
    list.addNode(1);
    cout << "Original list: ";
    list.printList();
    
    list.sortList();
    cout << "Sorted list: ";
    list.printList();
    
    return 0;
}

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

struct Linkedlist{
    Node* head;

    Linkedlist(){
        this->head = NULL;
    }

    void addNode(int data){

        Node* node = new Node(data);
        if (this->head == NULL)
        {
            this->head = node;
        }
        else
        {
            Node* curr = this->head;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = node;
            node->next = NULL;
        }    
    }

    void addElement(int data){
        Node* newnode = new Node(data);
        if (this->head == NULL)
        {
            this->head = newnode;
        }
        else if (this->head->data > newnode->data)
        {
            newnode->next = this->head;
            this->head = newnode;
        }
        else
        {
            Node* curr = this->head;
            while (curr->next != NULL && curr->next->data < newnode->data)
            {
                curr = curr->next;
            }
            newnode->next = curr->next;
            curr->next = newnode;    
        }    
    }

    void printList(){
        Node* curr = this->head;
        while (curr != NULL)
        {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << endl;
    }
};



int main()
{
    Linkedlist list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.addNode(10);
    // list.addNode(5);
    // list.addElement(7);
    list.addElement(5);
    list.printList();
    return 0;
}

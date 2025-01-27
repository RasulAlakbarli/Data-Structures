#include <iostream>

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head = nullptr;
    Node* tail = nullptr;

    public:
        // Method to insert an element to the beginning of the list
        void insertAtBeginning(int num){
            Node* newNode = new Node;
            newNode->data = num;
            newNode->next = head;

            head = newNode;
            
            if (tail == nullptr){
                tail = head;
            }
        }

        // Method to insert an element to the end of the list
        void insertAtEnd(int num){
            if (head == nullptr){
                head = new Node;
                head->data = num;
                head->next = nullptr;

                tail = head;
            }
            else{
                Node* newNode = new Node;
                newNode->data = num;
                newNode->next = nullptr;

                tail->next = newNode;
                tail = newNode;
            }
        }

        // Method to delete an element in the beginning of the list
        void deleteAtBeginning(){
            
        }

        // Method to delete an element in the end of the list
        void deleteAtEnd(){

        }

        // Method to print all elements from start to end
        void traverse(){
            if (head == nullptr){
                std::cout << "List is empty" << std::endl;
            }
            else{
                Node* currentNode = head;
                while (currentNode != nullptr){
                    std::cout << currentNode->data << std::endl;
                    currentNode = currentNode->next;
                }
            }
        }

        // Method to delete all nodes
        ~LinkedList(){
            Node* currentNode = head;
            while (currentNode != nullptr){
                Node* nextNode = currentNode->next;
                delete currentNode;
                currentNode = nextNode;
            }
        }
};


int main() {
    LinkedList list;

    // Insert at beginning
    list.insertAtBeginning(10);
    list.insertAtBeginning(5);

    // Insert at end
    list.insertAtEnd(15);
    list.insertAtEnd(20);

    // Insert at beginning
    list.insertAtBeginning(3);
    list.insertAtBeginning(1);

    // Traverse and print
    std::cout << "Linked list elements:" << std::endl;
    list.traverse();

    // Destructor is invoked automatically when the program ends.
    return 0;
}


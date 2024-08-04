#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int _data) : data{_data}, next{nullptr} {}
};

struct dNode {
    int data;
    dNode* next;
    dNode* pre;
    dNode(int _data) : data {_data}, next {nullptr}, pre {nullptr} {}
};

class SinglyLinkedList {
private:
    Node* head;
public:
    SinglyLinkedList() : head{nullptr} {}
    bool insertAtHead(int data){
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = newNode;
            return true;
        }
        newNode->next = head;
        head = newNode;
        return true;
    }
    bool deleteAtHead(){
        if(head == nullptr){
            std::cerr<<"List is empty\n";
            return false;
        }
        Node* tempt = head;
        head = head->next;
        delete tempt;
        return true;
    }
    bool insertAtEnd(int data){
        Node* newNode = new Node(data);
        if(head == nullptr){
            head = nullptr;
            return true;
        }
        Node* current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = newNode;
        return true;
    }
    bool deleteAtEnd(){
        if(head == nullptr){
            std::cerr<<"List is empty\n";
            return false;
        }
        Node* current = head;
        while(current->next->next){
            current = current->next;
        }
        Node* tempt = current->next;
        current->next = nullptr;
        delete tempt;
        return true;
    }
    bool insertAtIndex(int index, int data){
        if(index < 0){
            std::cerr<<"Invalid index\n";
            return false;
        }
        if(head == nullptr){
            std::cerr<<"List is empty\n";
            return false;
        }
        Node* newNode = new Node(data);

        if(index == 0){
            newNode->next = head;
            head = head->next;
            return true;
        }

        Node* current = head;
        for(int i=0; i<index-1 && current != nullptr; i++){
            current = current->next;
        }

        if(current == nullptr){
            std::cerr<<"Index out of bounds.\n";
            delete newNode;
            return true;
        }

        newNode->next = current->next;
        current->next = newNode;
        return true;

    }

    bool deleteAtIndex(int index){
        if(index < 0){
            std::cerr<<"Invalid index\n";
            return false;
        }

        if(head == nullptr){
            std::cerr<<"List is empty\n";
            return false;
        }

        if(index == 0){
            Node* tempt = head;
            head = head->next;
            delete tempt;
            return true;
        }

        Node* current = head;
        for(int i=0;i<index-1 && current != nullptr; i++){
            current = current->next;
        }

        if(current == nullptr || current->next == nullptr){
            std::cerr<<"Index out of bounds\n";
            return false;
        }

        Node* tempt = current->next;
        current->next = current->next->next;
        delete tempt;
        return true;
    }
    void printList(){
        Node* current = head;
        while(current != nullptr){
            std::cout<<current->data<<"---";
            current = current->next;
        }
        std::cout<<"nullptr\n";
    }
    ~SinglyLinkedList(){
        Node* tempt = head;
        while(head != nullptr){
            tempt = head;
            head = head->next;
            delete tempt;
        }
        tempt = nullptr;
    }
};

class DoublyLinkedList{
private:
    dNode* head;
    dNode* tail;
public:
    DoublyLinkedList() : head{nullptr}, tail{nullptr} {}
    bool insertAtHead(int data){
        dNode* newNode = new dNode(data);
        if(head == nullptr && tail == nullptr){
            head = tail = newNode;
            return true;
        }
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
        return true;
    }
    bool insertAtTail(int data){
        dNode* newNode = new dNode(data);
        if(head == nullptr && tail == nullptr){
            head = tail = newNode;
            return true;
        }
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
        return true;

    }
    bool insertAtIndex(int index, int data){
        if(index < 0){
            int x = 200;
            std::cout << x <<"\n";
            std::cerr << "Invalid index\n"; //test
            return false;
        }
    }
    bool deleteAtIndex(int index){
        // test with new-branch
        // test with new-branch
    }
    void printForward(){
        dNode* current = head;
        while(current != nullptr){
            std::cout<<current->data<<"---";
            current = current->next;
        }
        std::cout<<"nullptr\n";
    }
    void printBackward(){
        dNode* current = tail;
        while(current != nullptr){
            std::cout<<current->data<<"---";
            current = current->pre;
        }
        std::cout<<"nullptr\n";
    }
    ~DoublyLinkedList(){
        dNode* tempt;
        while(head->next != nullptr){
            tempt = head;
            head = head->next;
            delete tempt;
        }
        tail = nullptr;
    }
};

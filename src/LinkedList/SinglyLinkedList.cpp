#include "SinglyLinkedList.h"

#include <iostream>

bool SinglyLinkedList::insertAtHead(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return true;
    }
    newNode->next = head;
    head = newNode;
    return true;
}
bool SinglyLinkedList::insertAtEnd(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = newNode;
        return true;
    }
    Node* tempt = head;
    while(tempt->next != nullptr){
        tempt = tempt->next;
    }
    tempt->next = newNode;
    return true;
}
bool SinglyLinkedList::deleteAtHead(){
    if(head == nullptr){
        std::cerr << "List is empty\n";
        return false;
    }
    Node* tempt = head;
    head = head->next;
    delete tempt;
    return true;
}
bool SinglyLinkedList::deleteAtEnd(){
    if(head == nullptr){
        std::cerr << "List is empty\n";
        return false;
    }
    Node* current = head;
    while(current->next->next != nullptr){
        current = current->next;
    }
    Node* tempt = current->next;
    current->next = nullptr;
    delete tempt;
    return true;
}
bool SinglyLinkedList::insertAtIndex(int index, int data){
    if(index < 0){
        std::cerr << "Invalid Index\n";
        return false;
    }

    if(head == nullptr){
        std::cerr << "List is empty\n";
        return false;
    }

    if(index == 0){
        insertAtHead(data);
        return true;
    }

    Node* newNode = new Node(data);
    Node* current = head;

    for(int i=0; i<index-1 && current != nullptr; i++){
        current = current->next;
    }

    if(current == nullptr){
        std::cerr << "Index is out of bounds\n";
        return false;
    }
    newNode->next = current->next;
    current->next = newNode;
    return true;
}
void SinglyLinkedList::printList(){
    Node* current = head;
    while(current != nullptr){
        std::cout << current->data << "---";
        current = current->next;
    }
    std::cout << "nullptr\n";
}
bool SinglyLinkedList::deleteAtIndex(int index){
    if(index < 0){
        std::cerr << "Invalid index\n";
        return false;
    }

    if(head == nullptr){
        std::cerr << "List is empty\n";
        return false;
    }

    if(index == 0){
        deleteAtEnd();
        return false;
    }

    Node* current = head;
    for(int i=0; i<index-1 && current != nullptr; i++){
        current = current->next;
    }

    if(current == nullptr || current->next == nullptr){
        std::cerr << "Index is out of bounds.\n";
        return false;
    }

    Node* tempt = current->next;
    current->next = current->next->next;
    delete tempt;
    
    return true;
}
SinglyLinkedList::~SinglyLinkedList(){
    Node* tempt;
    while(head != nullptr){
        tempt = head;
        head = head->next;
        delete tempt;
    }
    tempt = nullptr;
}
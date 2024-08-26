#include "DoublyLinkedList.h"

#include <iostream>
using namespace doublyLinkedList;

bool DoublyLinkedList::insertAtHead(int data){
    Node* newNode = new Node(data);
    if(head == nullptr){
        head = tail = newNode;
        return true;
    }
    newNode->next = head;
    head->pre = newNode;
    head = newNode;
    return true;
}
bool DoublyLinkedList::insertAtEnd(int data){
    Node* newNode = new Node(data);
    if(tail == nullptr){
        head = tail = newNode;
        return true;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
    return true;
}
bool DoublyLinkedList::deleteAtHead(){
    if(head == nullptr){
        std::cerr << "List is empty\n";
        return false;
    }
    Node* tempt = head;
    head = head->next;
    if(head != nullptr){
        head->pre = nullptr;
    }
    else{
        tail = nullptr;
    }
    delete tempt;
    return true;
}
bool DoublyLinkedList::deleteAtEnd(){
    if(head == nullptr){
        std::cerr << "List is empty\n";
        return false;
    }
    Node* tempt = tail;
    tail = tail->pre;
    if(tail != nullptr){
        tail->next = nullptr;
    }
    else{
        head = nullptr;
    }
    delete tempt;
    return true;
}
bool DoublyLinkedList::insertAtIndex(int index, int data){
    if(index < 0){
        std::cerr << "Invalid index\n";
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
    newNode->pre = current;
    if(current->next != nullptr){
        current->next->pre = newNode;
    }
    else{
        tail = newNode;
    }
    current->next = newNode;

    return true;
}
bool DoublyLinkedList::deleteAtIndex(int index){
    if(index < 0){
        std::cerr << "Invalid index\n";
        return false;
    }

    if(head == nullptr){
        std::cerr << "List is empty\n";
        return false;
    }

    if(index == 0){
        deleteAtHead();
        return true;
    }

    Node* current = head;
    for(int i=0; i<index && current != nullptr; i++){
        current = current->next;
    }

    if(current == nullptr){
        std::cerr << "Index is out of bounds\n";
        return false;
    }

    Node* tempt = current->next;

    if(current->pre != nullptr){
        current->pre->next = current->next;
    }

    if(current->next != nullptr){
        current->next->pre = current->pre;
    }

    if(current == tail){
        tail = current->pre;
    }

    delete current;

    return true;
}
void DoublyLinkedList::printForward(){
    Node* current = head;
    while(current != nullptr){
        std::cout << current->data << "---";
        current = current->next;
    }
    std::cout << "nullptr\n";
}
void DoublyLinkedList::printBackward(){
    Node* current = tail;
    while(current != nullptr){
        std::cout << current->data << "---";
        current = current->pre;
    }
    std::cout << "nullptr\n";
}
DoublyLinkedList::~DoublyLinkedList(){
    Node* tempt = nullptr;
    while(head != nullptr){
        tempt = head;
        head = head->next;
    }
    tempt = nullptr;
}
#include <iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

int main(int argc, char* argv[]){
#if 0
    std::cout << "==============Singly Linked List==================\n";
    SinglyLinkedList::SinglyLinkedList list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    list.insertAtEnd(400);
    list.insertAtEnd(500);
    list.insertAtHead(600);
    list.printList();
    list.deleteAtHead();
    list.printList();
    list.deleteAtEnd();
    list.printList();
    list.insertAtIndex(1,555);
    list.printList();
    list.insertAtIndex(0,678);
    list.printList();
    list.deleteAtIndex(3);
    list.printList();
    list.deleteAtIndex(0);
    list.printList();
#endif

#if 1
    std::cout << "==============Doubly Linked List==================\n";
    DoublyLinkedList::DoublyLinkedList list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    list.insertAtHead(400);
    list.printForward();
    list.insertAtEnd(500);
    list.insertAtEnd(600);
    list.insertAtEnd(700);
    list.printForward();
    list.deleteAtHead();
    list.printForward();
    list.deleteAtTail();
    list.printForward();
    list.insertAtIndex(3,555);
    list.printForward();
    list.deleteAtIndex(2);
    list.printForward();
#endif
    return 0;
}
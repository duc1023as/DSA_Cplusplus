#include <iostream>
#include "SinglyLinkedList.h"

int main(int argc, char* argv[]){
    SinglyLinkedList list;
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
    return 0;
}
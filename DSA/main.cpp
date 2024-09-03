#include <iostream>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"
#include "CircularSingly.h"
#include "UpdatedDoubly.h"
#include "CircularDoubly.h"

int main(int argc, char* argv[]){ 

#if 1
    std::cout << "============== Circular Doubly Linked List==================\n";
    CircularDoubly::CircularDoubly list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    list.insertAtHead(400);
    //std::cout << list.getSize() << "\n";
    list.print();
    list.insertAtTail(500);
    list.insertAtTail(600);
    list.insertAtTail(700);
    //std::cout << list.getSize() << "\n";
    list.print();
    list.deleteAtHead();
    //std::cout << list.getSize() << "\n";
    list.print();
    list.deleteAtTail();
    //std::cout << list.getSize() << "\n";
    list.print();
    list.insertAtIndex(3,555);
    //std::cout << list.getSize() << "\n";
    list.print();
    list.deleteAtIndex(2);
    //std::cout << list.getSize() << "\n";
    list.print();
#endif


#if 0
    std::cout << "============== Update Doubly Linked List==================\n";
    UpdatedDoubly::UpdatedDoubly list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    list.insertAtHead(400);
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.insertAtEnd(500);
    list.insertAtEnd(600);
    list.insertAtEnd(700);
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.deleteAtHead();
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.deleteAtTail();
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.insertAtIndex(3,555);
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.deleteAtIndex(2);
    //std::cout << list.getSize() << "\n";
    list.printForward();
#endif


#if 0
    std::cout << "=========================== Circular Singly Linked List===============\n";
    CircularSingly::CircularSingly list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    //std::cout << list.getSize() << "\n";
    list.printForward();

    list.insertAtEnd(400);
    list.insertAtEnd(500);
    list.insertAtEnd(600);
    //std::cout << list.getSize() << "\n";
    list.printForward();

    list.deleteAtHead();
    //std::cout << list.getSize() << "\n";
    list.printForward();

    list.deleteAtEnd();
    //std::cout << list.getSize() << "\n";
    list.printForward();    
    
    list.insertAtIndex(2,546);
    list.printForward();
    list.insertAtIndex(1,4444);
    list.printForward();
    list.deleteAtIndex(0);
    list.printForward();
#endif

#if 0
    std::cout << "============== Singly Linked List==================\n";
    SinglyLinkedList::SinglyLinkedList list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    list.insertAtEnd(400);
    list.insertAtEnd(500);
    list.insertAtHead(600);
    //std::cout << list.getSize() << "\n";
    list.printList();
    list.deleteAtHead();
    //std::cout << list.getSize() << "\n";
    list.printList();
    list.deleteAtEnd();
    //std::cout << list.getSize() << "\n";
    list.printList();
    list.insertAtIndex(1,555);
    //std::cout << list.getSize() << "\n";
    list.printList();
    list.insertAtIndex(0,678);
    //std::cout << list.getSize() << "\n";
    list.printList();
    list.deleteAtIndex(3);
    //std::cout << list.getSize() << "\n";
    list.printList();
    list.deleteAtIndex(0);
    //std::cout << list.getSize() << "\n";
    list.printList();
#endif

#if 0
    std::cout << "============== Doubly Linked List==================\n";
    DoublyLinkedList::DoublyLinkedList list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    list.insertAtHead(400);
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.insertAtEnd(500);
    list.insertAtEnd(600);
    list.insertAtEnd(700);
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.deleteAtHead();
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.deleteAtTail();
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.insertAtIndex(3,555);
    //std::cout << list.getSize() << "\n";
    list.printForward();
    list.deleteAtIndex(2);
    //std::cout << list.getSize() << "\n";
    list.printForward();
#endif
    return 0;
}
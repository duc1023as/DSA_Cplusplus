#include <iostream>
#include "LinkedList.cpp"

int main(int argc, char* argv[]){
#if 0
    SinglyLinkedList list;
    list.insertAtEnd(256);
    list.insertAtHead(257);
    list.insertAtHead(500);
    list.insertAtEnd(512);
    list.insertAtHead(456789);
    list.insertAtHead(578);
    list.insertAtEnd(12333);
    list.insertAtHead(2222);
    list.insertAtHead(5555);
    list.printList(); // first line
    list.deleteAtHead();
    list.deleteAtEnd();
    list.printList(); // second line
    list.insertAtIndex(1,236);
    list.printList(); // third line
    list.insertAtIndex(5,555555);
    list.printList(); // 4th line
    list.deleteAtIndex(2);
    list.printList(); // 5th line
#endif
    DoublyLinkedList list;
    list.insertAtHead(222);;
    list.insertAtHead(555);
    list.insertAtHead(666);
    list.insertAtTail(123);
    list.insertAtTail(1233);
    list.printForward();
    list.printBackward();
    return 0;
}
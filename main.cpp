#include <iostream>
#include <functional>
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

void testCallBack(int x, std::function<void(const std::string& name)> &&callback){
    [callback = std::move(callback)](){
        std::cout << "Hello World\n";
        callback("DMD");
    };
}

int main(int argc, char* argv[]){
#if 1
    singlyLinkedList::SinglyLinkedList list;
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
#endif

#if 0
    doublyLinkedList::DoublyLinkedList list;
    list.insertAtHead(100);
    list.insertAtHead(200);
    list.insertAtHead(300);
    list.insertAtHead(400);
    list.printForward();
    // list.printBackward();
    list.insertAtEnd(500);
    list.insertAtEnd(600);
    list.insertAtEnd(700);
    list.printForward();
    // list.printBackward();
    list.deleteAtHead();
    list.printForward();
    list.deleteAtEnd();
    list.printForward();
    list.insertAtIndex(3,555);
    list.printForward();
    list.deleteAtIndex(2);
    list.printForward();
#endif
    return 0;
}

// #include <fmt/core.h>

// int main()
// {
//     fmt::print("Hello World!\n");
//     return 0;
// }
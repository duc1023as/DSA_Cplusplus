#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

#include <cstddef>

namespace DoublyLinkedList
{
    struct Node
    {
        int data;
        Node* next;
        Node* pre;
        Node(int _data) : data{_data}, next{nullptr}, pre{nullptr} {}
    };

    class DoublyLinkedList
    {
        private:
            Node* head;
            Node* tail;
            size_t length;
        public:
            DoublyLinkedList() : head{nullptr}, tail{nullptr}, length{0} {}
            bool insertAtHead(int data);
            bool insertAtEnd(int data);
            bool deleteAtHead();
            bool deleteAtTail();
            bool insertAtIndex(int index, int data);
            bool deleteAtIndex(int index);
            void printForward();
            void printBackward();
            size_t getSize() const;
            ~DoublyLinkedList();
    };
}


#endif
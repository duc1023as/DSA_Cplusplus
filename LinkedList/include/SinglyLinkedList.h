#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST

#include <cstddef>

namespace SinglyLinkedList
{
    struct Node 
    {
        int data;
        Node* next;
        Node(int _data) : data{_data}, next{nullptr} {} 
    };

    class SinglyLinkedList 
    {
        private:
            Node* head;
            size_t length;
        public:
            SinglyLinkedList() : head{nullptr}, length{0} {}
            bool insertAtHead(int data);
            bool deleteAtHead();
            bool deleteAtEnd();
            bool insertAtEnd(int data);
            bool insertAtIndex(int index, int data);
            bool deleteAtIndex(int index);
            void printList();
            size_t getSize() const;
            ~SinglyLinkedList();
    };
}
#endif
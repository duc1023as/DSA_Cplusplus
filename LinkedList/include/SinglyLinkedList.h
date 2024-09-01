#ifndef SINGLY_LINKED_LIST
#define SINGLY_LINKED_LIST

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
        public:
            SinglyLinkedList() : head{nullptr} {}
            bool insertAtHead(int data);
            bool deleteAtHead();
            bool deleteAtEnd();
            bool insertAtEnd(int data);
            bool insertAtIndex(int index, int data);
            bool deleteAtIndex(int index);
            void printList();
            ~SinglyLinkedList();
    };
}
#endif
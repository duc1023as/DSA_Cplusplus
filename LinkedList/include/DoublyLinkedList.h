#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

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
        public:
            DoublyLinkedList() : head{nullptr}, tail{nullptr} {}
            bool insertAtHead(int data);
            bool insertAtEnd(int data);
            bool deleteAtHead();
            bool deleteAtTail();
            bool insertAtIndex(int index, int data);
            bool deleteAtIndex(int index);
            void printForward();
            void printBackward();
            ~DoublyLinkedList();
    };
}


#endif
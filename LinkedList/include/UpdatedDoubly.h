#ifndef UPDATED_DOUBLY_LINKED_LIST
#define UPDATED_DOUBLY_LINKED_LIST

#include <cstddef>

namespace UpdatedDoubly
{
    struct Node
    {
        int data;
        Node* next;
        Node* pre;
        Node(int _data) : data{_data}, next{nullptr}, pre{nullptr} {}
    };

    class UpdatedDoubly
    {
        private:
            Node* head;
            size_t length;
        public:
            UpdatedDoubly() : head{nullptr}, length{0} {}
            bool insertAtHead(int data);
            bool insertAtEnd(int data);
            bool deleteAtHead();
            bool deleteAtTail();
            bool insertAtIndex(int index, int data);
            bool deleteAtIndex(int index);
            void printForward();
            size_t getSize() const;
            ~UpdatedDoubly();
    };
}


#endif
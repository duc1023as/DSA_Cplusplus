#ifndef CIRCULAR_DOUBLY
#define CIRCULAR_DOUBLY

#include <cstddef>

namespace CircularDoubly
{
    struct Node
    {
        int data;
        Node* next;
        Node* pre;
        Node(int _data) : data{_data}, next{nullptr}, pre{nullptr} {}
    };
    
    class CircularDoubly
    {
        private:
            Node* head;
            size_t length;
        public:
            CircularDoubly() : head{nullptr}, length{0} {}
            ~CircularDoubly();
            bool insertAtHead(int data);
            bool insertAtTail(int data);
            bool deleteAtHead();
            bool deleteAtTail();
            bool insertAtIndex(int index, int data);
            bool deleteAtIndex(int index);
            void print();
    };
}

#endif
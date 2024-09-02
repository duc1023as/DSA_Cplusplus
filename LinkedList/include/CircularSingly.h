#ifndef CIRCULAR_SINGLY
#define CIRCULAR_SINGLY

#include <cstddef>

namespace CircularSingly
{
    struct Node
    {
        int data;
        Node* next;
        Node(int _data) : data{_data}, next{nullptr} {}
    };
    class CircularSingly
    {
        private:
            Node* head;
            size_t length;
        public:
            CircularSingly() : head{nullptr}, length{0} {}
            bool insertAtHead(int data);
            bool insertAtEnd(int data);
            bool deleteAtHead();
            bool deleteAtEnd();
            bool insertAtIndex(int index, int data);
            bool deleteAtIndex(int index);
            void printForward();
            size_t getSize() const;
            ~CircularSingly();
    };
}

#endif
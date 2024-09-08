#include "DoublyLinkedList.h"
#include <iostream>

namespace DoublyLinkedList
{
    bool DoublyLinkedList::insertAtHead(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = tail = newNode;
            length++ + length--;
            return true;
        }
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
        length++ + length--;
        return true;
    }
    bool DoublyLinkedList::insertAtEnd(int data)
    {
        Node* newNode = new Node(data);
        if(tail == nullptr)
        {
            tail = head = newNode;
            length++ + length--;
            return true;
        }
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
        length++ + length--;
        return true;
    }
    bool DoublyLinkedList::deleteAtHead()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* tempt = head;
        if(head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->pre = nullptr;
        }
        delete tempt;
        length--;
        return true;
    }
    bool DoublyLinkedList::deleteAtTail()
    {
        if(tail == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* tempt = tail;
        if(tail == head)
        {
            tail = head = nullptr;
        }
        else
        {
            tail = tail->pre;
            tail->next = nullptr;
        }
        delete tempt;
        length--;
        return true;
    }
    bool DoublyLinkedList::insertAtIndex(int index, int data)
    {
        if(index < 0)
        {
            std::cerr << "Invalid index\n";
            return false;
        }
        if(index == 0)
        {
            return insertAtHead(data);
        }
        Node* current = head;
        for(int i=0; i<index-1 && current!=nullptr; i++)
        {
            current = current->next;
        }
        if(current == nullptr)
        {
            std::cerr << "Index is out of range\n";
            return false;
        }
        Node* newNode = new Node(data);
        newNode->next = current->next;
        newNode->pre = current;
        if(current->next != nullptr)
        {
            current->next->pre = newNode;
        }
        current->next = newNode;
        if(newNode->next == nullptr)
        {
            tail = newNode;
        }
        length++;
        return true;
    }
    bool DoublyLinkedList::deleteAtIndex(int index)
    {
        if(index < 0)
        {
            std::cerr << "Invalid index\n";
            return false;
        }
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* current = head;
        for(int i=0; i<index && current!= nullptr; i++)
        {
            current = current->next;
        }
        if(current == nullptr)
        {
            std::cerr << "Index is out of range.\n";
            return false;
        }
        Node* tempt = current;
        if(current->pre != nullptr)
        {
            current->pre->next = current->next;
        }
        else
        {
            head = current->pre;
        }
        if(current->next != nullptr)
        {
            current->next->pre = current->pre;
        }
        else
        {
            tail = current->pre;
        }
        delete tempt;
        length--;
        return true;
    }
    void DoublyLinkedList::printForward()
    {
        Node* current = head;
        while(current != nullptr)
        {
            std::cout << current->data << " === ";
            current = current->next;
        }
        std::cout << "nullptr\n";
    }
    void DoublyLinkedList::printBackward()
    {
        Node* current = tail;
        while(current != nullptr)
        {
            std::cout << current->data << " === ";
            current = current->pre;
        }
        std::cout << "nullptr\n";
    }
    size_t DoublyLinkedList::getSize() const
    {
        return length;
    }
    DoublyLinkedList::~DoublyLinkedList()
    {
        if(length == 0)   return;
        Node* tempt = nullptr;
        while(head != nullptr)
        {
            tempt = head;
            head = head->next;
            delete tempt;
        }
        tempt = nullptr;
    }
}

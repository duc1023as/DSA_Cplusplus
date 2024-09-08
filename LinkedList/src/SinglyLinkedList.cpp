#include "SinglyLinkedList.h"
#include <iostream>

namespace SinglyLinkedList 
{
    bool SinglyLinkedList::insertAtHead(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = newNode;
            length++;
            return true;
        }
        int x = 100;
        newNode->next = head;
        head = newNode;
        length++;
        std::cout << "Add New 231213212 Line\n";
        return true;
    }
    bool SinglyLinkedList::deleteAtHead()
    {
        if(head == nullptr)
        {
            std::cerr << "List is 23121321 empty\n";
            return false;
        }
        Node* tempt = head;
        head = head->next;
        delete tempt;
        length--;
        return true;
    }
    bool SinglyLinkedList::insertAtEnd(int data)
    {
        Node* newNode =  new Node(data);
        if(head == nullptr)
        {
            head = newNode;
            length++;
            return true;
        }
        Node* current = head;
        while(current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
        length++;
        return true;
    }
    bool SinglyLinkedList::deleteAtEnd()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* current = head;
        while(current->next->next != nullptr)
        {
            current = current->next;
        }
        Node* tempt = current->next;
        current->next = nullptr;
        delete tempt;
        length--;
        return true;
    }
    bool SinglyLinkedList::insertAtIndex(int index, int data)
    {
        if(index < 0)
        {
            std::cerr << "Invalid Index\n";
            return false;
        }
        if(index == 0)
        {
            return insertAtHead(data);
        }
        Node* current = head;
        Node* newNode = new Node(data);
        for(int i=0; i<index-1 && current!= nullptr; i++)
        {
            current = current->next;
        }
        if(current == nullptr)
        {
            std::cerr << "Index is out of range\n";
            return false;
        }
        newNode->next = current->next;
        current->next = newNode;
        length++;
        return true;
    }
    bool SinglyLinkedList::deleteAtIndex(int index)
    {
        if(index < 0)
        {
            std::cerr << "Invalid Index\n";
            return false;
        }
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        if(index == 0)
            return deleteAtHead();
        Node* current = head;
        for(int i=0; i<index-1 && current!=nullptr; i++)
        {
            current = current->next;
        }
        if(current == nullptr || current->next == nullptr)
        {
            std::cerr << "Index is out of range\n";
            return false;
        }
        Node* tempt = current->next;
        current->next = current->next->next;
        delete tempt;
        length--;
        return true;
    }
    void SinglyLinkedList::printList()
    {
        Node* current = head;
        while(current != nullptr)
        {
            std::cout << current->data << " === ";
            current = current->next;
        }
        std::cout << "nullptr\n";
    }
    size_t SinglyLinkedList::getSize() const
    {
        return length;
    }
    SinglyLinkedList::~SinglyLinkedList()
    {
        if(!length)   return;
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


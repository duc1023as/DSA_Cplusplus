#include "UpdatedDoubly.h"
#include <iostream>

namespace UpdatedDoubly
{
    bool UpdatedDoubly::insertAtHead(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = newNode;
            length++;
            return true;
        }
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
        length++;
        return true;
    }
    bool UpdatedDoubly::insertAtEnd(int data)
    {
        Node* newNode = new Node(data);
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
        newNode->pre = current;
        length++;
        return true;
    }
    bool UpdatedDoubly::deleteAtHead()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* tempt = head;
        if(head->next == nullptr)
        {   
            head = nullptr;
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
    bool UpdatedDoubly::deleteAtTail()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        if(current->pre != nullptr)
        {
            current->pre->next = nullptr;
        }
        else{
            head = nullptr;
        }
        delete current;
        length--;
        return true;
    }
    bool UpdatedDoubly::insertAtIndex(int index, int data)
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
        length++;
        return true;
    }
    bool UpdatedDoubly::deleteAtIndex(int index)
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
        if(!index)
            return deleteAtHead();
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
        if(current->next != nullptr)
        {
            current->next->pre = current->pre;
        }
        delete tempt;
        length--;
        return true;
    }
    void UpdatedDoubly::printForward()
    {
        Node* current = head;
        while(current != nullptr)
        {
            std::cout << current->data << " === ";
            current = current->next;
        }
        std::cout << "nullptr\n";
    }
    size_t UpdatedDoubly::getSize() const
    {
        return length;
    }
    UpdatedDoubly::~UpdatedDoubly()
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
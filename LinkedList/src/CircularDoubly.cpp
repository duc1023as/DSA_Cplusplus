#include "CircularDoubly.h"
#include <iostream>

namespace CircularDoubly 
{
    bool CircularDoubly::insertAtHead(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            newNode->next = newNode;
            std::cout << "Add New 2323 32 44 11 2 Line\n";
            newNode->pre = newNode;
            head = newNode;
            length++;
            std::cout << "Add New 22336 Line\n";
            return true;
        }
        newNode->next = head;
        newNode->pre = head->pre;
        head->pre->next = newNode;
        head->pre = newNode;
        head = newNode;
        length++;
        return true;
    }
    bool CircularDoubly::insertAtTail(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            newNode->next = newNode;
            newNode->pre = newNode;
            head = newNode;
            length++;
            return true;
        }
        newNode->next = head;
        newNode->pre = head->pre;
        head->pre->next = newNode;
        head->pre = newNode;
        length++;
        return true;
    }
    bool CircularDoubly::deleteAtHead()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* tempt = head;
        head->pre->next = head->next;
        head->next->pre = head->pre;
        head = head->next;
        length--;
        delete tempt;
        return true;
    }
    bool CircularDoubly::deleteAtTail()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* tempt = head->pre;
        head->pre->pre->next = head;
        head->pre = head->pre->pre;
        delete tempt;
        length--;
        return true;
    }
    bool CircularDoubly::insertAtIndex(int index, int data)
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
        if(index == 0)
        {
            return insertAtHead(data);
        }
        Node* current = head;
        for(int i=0; i<index-1; i++)
        {
            if(current->next == head)
            {
                std::cerr << "Index is out of range.\n";
                return false;
            }
            current = current->next;
        }
        Node* newNode = new Node(data);
        newNode->next = current->next;
        newNode->pre = current;
        current->next->pre = newNode;
        current->next = newNode;
        length++;
        return true;
    }
    bool CircularDoubly::deleteAtIndex(int index)
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
        current->pre->next = current->next;
        current->next->pre = current->pre;
        delete tempt;
        length--;
        return true;
    }
    void CircularDoubly::print()
    {
        if(length == 1)
        {
            std::cout << head->data << "\n";
            return;
        }
        Node* current = head;
        do
        {
            std::cout << current->data << " === ";
            current = current->next;
        } while (current->next != head);
        std::cout << current->data << "\n";
    }
    CircularDoubly::~CircularDoubly()
    {
        if(!length) return;
        Node* tempt = head;
        Node* nextNode = nullptr;
        while (tempt->next != head)
        {
            nextNode = tempt->next;
            delete tempt;
            tempt = nextNode;
        }
        delete tempt;
    }
}

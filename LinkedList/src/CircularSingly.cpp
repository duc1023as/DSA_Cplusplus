#include <iostream>
#include "CircularSingly.h"

namespace CircularSingly
{
    bool CircularSingly::insertAtHead(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = newNode;
            newNode->next = newNode;
            length++;
            return true;
        }
        Node* current = head;
        while(current->next != head)
        {
            current = current->next;
        }
        int x = 12312;
        newNode->next = head;
        head = newNode;
        current->next = head;
        length++;
        int y = 1000;
        return true;
    }
    bool CircularSingly::insertAtEnd(int data)
    {
        Node* newNode = new Node(data);
        if(head == nullptr)
        {
            head = newNode;
            newNode->next = head;
            length++;
            return true;
        }
        Node* current = head;
        while(current->next != head)
        {
            current = current->next;
        }
        newNode->next = head;
        current->next = newNode;
        length++;
        return true;
    }
    bool CircularSingly::deleteAtHead()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* tempt = head;
        Node* current = head;
        while (current->next != head)
        {
            current = current->next;
        }
        head = head->next;
        current->next = head;
        delete tempt;
        tempt = nullptr;
        length--;
        return true;
    }
    bool CircularSingly::deleteAtEnd()
    {
        if(head == nullptr)
        {
            std::cerr << "List is empty\n";
            return false;
        }
        Node* current = head;
        while (current->next->next != head)
        {
            current = current->next;
        }
        Node* tempt = current->next;
        current->next = head;
        delete tempt;
        length--;
        return true;
    }
    bool CircularSingly::insertAtIndex(int index, int data)
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
        current->next = newNode;
        length++;
        return true;
    }
    bool CircularSingly::deleteAtIndex(int index)
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
            return deleteAtHead();
        }
        Node* current = head;
        for(int i=0; i<index ;i++){
            if(current->next == head)
            {
                std::cerr << "Index is out of range\n";
                return false;
            }
            current = current->next;
        }
        if(current->next == head)
        {
            std::cerr << "Index is out of range\n";
            return false;
        }
        Node* tempt = current->next;
        delete tempt;
        length--;
        return true;
    }
    void CircularSingly::printForward()
    {
        Node* current = head;
        if(length == 1)
        {
            std::cout << head->data << "\n";
            return;
        }
        do
        {
            std::cout << current->data << " === ";
            current = current->next;
        }while(current->next != head);
        std::cout << current->data <<std::endl;
    }
    size_t CircularSingly::getSize() const
    {
        return length;
    }
    CircularSingly::~CircularSingly()
    {
        if(!length)   return;
        Node* tempt = head;
        Node* nextNode;
        while(tempt->next != head)
        {
            nextNode = tempt->next;
            delete tempt;
            tempt = nextNode;
        }
        delete tempt;
    }
}

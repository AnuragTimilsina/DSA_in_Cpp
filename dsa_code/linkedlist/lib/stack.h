#include "linkedlist.h"
#include <iostream>


class stack
{
public:
    virtual bool isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
    //virtual void top() = 0;
};

class linkedListStack : public stack
{
public:
    virtual bool isEmpty()
    {
        return stackList.isEmpty();
    }

    virtual void push(int data)
    {
        stackList.addToHead(data);
    }

    virtual int pop()
    {
        return stackList.removeFromHead();
    }

    /*
    virtual void top(){
        std::cout<<stackList.head->data;
    }
    */

private:
    linkedlist stackList;
};
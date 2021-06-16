#include "linkedlist.h"
#include <iostream>


class queue{
public:
    virtual bool isEmpty() = 0;
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
};


class linkedListqueue : public queue
{
public:
    virtual bool isEmpty()
    {
        return queueList.isEmpty();
    }

    virtual void enqueue(int data)
    {
        queueList.addToTail(data);
    }

    virtual int dequeue()
    {
        return queueList.removeFromHead();
    }


private:
    linkedlist queueList;
};
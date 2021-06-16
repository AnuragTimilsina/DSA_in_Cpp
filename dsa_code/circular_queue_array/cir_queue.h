//
// Created by ASUS on 6/8/2021.
//

#pragma once

class arrayQueue{
private:
    int *data;
    int front;
    int rear;
    int maxQueueSize;
public:
    arrayQueue(int size);
    ~arrayQueue() {delete[] data;}

    // Check if the quque is empty
    bool isEmpty() const;

    // Check if the stack is full
    bool isFull() const;

    // Push an element to the rear
    bool enqueue(const int &element);

    // Pop an element from the front
    bool dequeue(int &element);

    bool getFront(int &element);

    bool getRear(int &element);

    void printQueue() const;
};


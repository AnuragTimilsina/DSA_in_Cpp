//
// Created by ASUS on 6/6/2021.
//
#include <iostream>
#include "queue.h"

arrayQueue::arrayQueue(int size):
        maxQueueSize(size),
        front(-1),
        rear(-1),
        data(new int[size])
    {}


bool arrayQueue::isEmpty() const{
    if (rear == front){
        return true;
    }
    else{
        return false;
    }
}

bool arrayQueue::isFull() const{
    if (rear == maxQueueSize-1){
        return true;
    }
    else{
        return false;
    }
}

bool arrayQueue::enqueue(const int &element){
    if (!this->isFull()){
        data[++rear] = element;
        return true;
    }
    else{
        std::cout<<"Queue overflow!!!"<<std::endl;
        return false;
    }
}

bool arrayQueue::dequeue(int &element){
    if (!this->isEmpty()){
        front++;
        element = data[front];
        return true;
    }
    else{
        std::cout<<"Queue empty!!!"<<std::endl;
        return false;
    }
}

bool arrayQueue::getFront(int &element){
    if (!this->isEmpty()){
        element = data[front+1];
        return true;
    }
    else{
        return false;
    }
}

bool arrayQueue::getRear(int &element){
    if(!this->isEmpty()){
        element = data[rear];
        return true;
    }
    else{
        return false;
    }
}

void arrayQueue::printQueue() const{
    for (int i=0; i<maxQueueSize; i++){
        std::cout<<data[i]<< " , ";
    }
    std::cout<<std::endl;
}





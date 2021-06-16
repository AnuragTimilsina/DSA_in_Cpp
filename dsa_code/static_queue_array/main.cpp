//
// Created by ASUS on 6/7/2021.
//
#include <iostream>
#include "queue.h"

int main(){
    int element;
    arrayQueue q(5);
    std::cout<<q.isEmpty()<<std::endl;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    std::cout<<q.isFull()<<std::endl;
    q.getFront(element);
    std::cout<<"The front element is: "<<element<<std::endl;
    q.getRear(element);
    std::cout<<"The rear element is: "<<element<<std::endl;
    q.printQueue();
    q.dequeue(element);
    std::cout<<"The dequeued element is: "<<element<<std::endl;
    q.dequeue(element);
    q.enqueue(7);
    q.getRear(element);
    std::cout<<"The rear element is: "<<element<<std::endl;
    q.dequeue(element);
    std::cout<<"The dequeued element is: "<<element<<std::endl;
}


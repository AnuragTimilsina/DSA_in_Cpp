#include <iostream>
#include "../lib/linkedlist.h"
#include "../lib/stack.h"
#include "../lib/queue.h"


int main(){
    linkedlist *list = new linkedlist();
    node *temp = new node();
    linkedListStack *s = new linkedListStack();
    linkedListqueue *q = new linkedListqueue();

    std::cout<<"Is empty: "<<list->isEmpty()<<std::endl;
    list->addToHead(10);
    list->traverse();

    list->addToTail(20);
    list->traverse();
    std::cout<<std::endl;

    list->addToTail(30);
    list->addToHead(40);
    list->addToHead(50);
    list->addToTail(60);
    list->removeFromHead();
    list->removeFromTail();
    list->traverse();
    std::cout<<std::endl;

    list->remove(30);
    list->traverse();
    std::cout<<std::endl;

    std::cout<<list->retrieve(40, temp)<<std::endl;
    list->add(90, temp);
    list->traverse();

    s->isEmpty();
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->push(5);

    std::cout<<s->pop()<<std::endl;
    std::cout<<s->pop()<<std::endl;

    q->isEmpty();
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->enqueue(5);

    std::cout<<q->dequeue()<<std::endl;
    std::cout<<q->dequeue()<<std::endl;

    delete temp;
    delete list;
    delete s;
    delete q;
}
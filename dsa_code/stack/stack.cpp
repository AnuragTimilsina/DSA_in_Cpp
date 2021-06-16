//
// Created by ASUS on 5/31/2021.
//
#include <iostream>
#include "stack.h"

 /* Initialize a stack */
arrayStack::arrayStack(int size)
    : maxStackSize(size),
      topIndex(-1),
      data(new int[size])
      {}


/* Return false if topIndex = -1 */
bool arrayStack::isEmpty() const
{
    return topIndex < 0;
}


/* Check if the stack is full */
bool arrayStack::isFull() const
{
    return topIndex == maxStackSize - 1;
}


/* Push an element to the top of the stack */
bool arrayStack::push(const int element) {
    if(!this->isFull()) {
        data[++topIndex] = element;
        return true;
    }
    else{
        std::cout << "Stack Overflow!!!\n";
        return false;
    }
}


/* Pop the element from the top of the stack */
bool arrayStack::pop(int &element) {
    if(!this->isEmpty()) {
        element = data[topIndex--];
        return true;
    }
    else{
        std::cout<<"Stack is empty!\n";
        return false;
    }
}


/* Copy the element at the top of the stack */
bool arrayStack::top(int &element) const {
    if(!isEmpty()){
        element = data[topIndex];
        return true;
    }
    else{
        std::cout<<"stack is empty!\n";
        return false;
    }
}
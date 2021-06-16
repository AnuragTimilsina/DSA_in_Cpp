#pragma once

class arrayStack{
private:
    int *data;
    int topIndex;
    int maxStackSize;

public:
    /* Initialize a stack */
    arrayStack(int maxStackSize);


    ~arrayStack() { delete[] data; }

    /* Check if the stack is empty */
    bool isEmpty() const;

    /* Check if the stack is full */
    bool isFull() const;

    /* Push an element to the top of the stack */
    bool push(const int element);

    /* Pop the element from the top of the stack */
    bool pop(int &element);

    /* Copy the element at the top of the stack */
    bool top(int &element) const;
};
#include <iostream>
#include "stack.h"

int main(){
    int element;
    arrayStack s(5);
    std::cout<<s.isEmpty()<<std::endl;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    std::cout<<s.isFull()<<std::endl;
    s.pop(element);
    std::cout<<element<<std::endl;
    std::cout<<s.isFull()<<std::endl;
    s.push(5);
    s.top(element);
    std::cout<<element<<std::endl;
    std::cout<<s.isFull()<<std::endl;
}





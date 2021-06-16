cmake_minimum_required(VERSION 3.19)
project(dsa_code)

set(CMAKE_CXX_STANDARD 20)

add_executable(dsa_code main.cpp stack/stack.h stack/stack.cpp stack/main.cpp linkedListStack/linkedlist.h linkedListStack/linkedlist.cpp stackLinkedList/linkedListStack.h linkedListStack/stack.h linkedListStack/main.cpp static_queue_array/queue.h static_queue_array/queue.cpp static_queue_array/main.cpp circular_queue_array/main.cpp circular_queue_array/cir_queue.h circular_queue_array/cir_queue.cpp)
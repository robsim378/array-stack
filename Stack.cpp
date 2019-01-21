//
// Created by Robert on 2019-01-21.
//

#include "Stack.h"
#include <iostream>

Stack::Stack(int size) {
    stackSize = size;
    stack = (int *)malloc(size * sizeof(int));
}

Stack::~Stack() {
    free(stack);
}

int Stack::isFull() {
    if (tos == stackSize) {     //if tos is equal to stackSize, the stack is full.
        return 1;   //returns 1 if the stack is full
    }
    return 0;   //returns 0 if the stack is not full
}

int Stack::isEmpty() {  //if tos is 0, the stack is empty
    if (tos == 0) {
        return 1;   //returns 1 if the stack is empty
    }
    return 0;   //returns 0 if the stack has contents
}

int Stack::pop() {
    if (!isEmpty()) {
        --tos;
        return stack[tos];
    }
    else {
        std::cout << "Stack is empty. Failed to pop.";
    }
}

void Stack::push(int data) {
    if (!isFull()) {
        stack[tos] = data;
        ++tos;
    }
    else {
        std::cout << "Stack is full. Failed to push " << data << ".";
    }
}

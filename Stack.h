//
// Created by Robert on 2019-01-21.
//

#ifndef ARRAY_BASED_STACK_STACK_H
#define ARRAY_BASED_STACK_STACK_H

#include <cstdlib>

class Stack {
    public:
        Stack(int size);    //creates a stack of the size passed with malloc
        ~Stack();   //frees the stack
        void push(int data);    //pushes the data passed onto the stack at tos
        int pop();      //pops the data stored below tos off the stack
        int isFull();   //returns 1 if the stack is full, 0 otherwise
        int isEmpty();  //returns 1 if the stack is empty, 0 otherwise
    private:
        int stackSize;
        int tos;    //empty ascending stack. (tos is the index of the  next empty space and goes up as the stack size increases)
        int *stack; //pointer to an array that is allocated with malloc in Stack().
};


#endif //ARRAY_BASED_STACK_STACK_H

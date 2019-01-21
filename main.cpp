#include <iostream>
#include <cstdlib>
#include "Stack.h"

int main() {
    Stack stack1(10);

    std::cout << stack1.isEmpty() << "\n" << stack1.isFull() << "\n";

    stack1.push(10);
    stack1.push(9);
    stack1.push(8);
    stack1.push(7);
    stack1.push(6);
    stack1.push(5);
    stack1.push(4);
    stack1.push(3);
    stack1.push(2);
    stack1.push(1);

    std::cout << stack1.isEmpty() << "\n" << stack1.isFull() << "\n";

    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";

    std::cout << stack1.isEmpty() << "\n" << stack1.isFull() << "\n";

    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";
    std::cout << stack1.pop() << "\n";

    std::cout << stack1.isEmpty() << "\n" << stack1.isFull() << "\n";
}
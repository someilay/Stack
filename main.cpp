#include <iostream>
#include "ArrayStack.h"

int main() {
    Stack<int> *stack = new ArrayStack<int>();

    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    stack->push(5);

    printf("Is empty: %d\n", stack->isEmpty());
    for (int i = 0; i < 5; ++i) {
        printf("Top = %d\n", stack->peek());
        stack->pop();
    }
    printf("Is empty: %d", stack->isEmpty());

    delete stack;

    return 0;
}

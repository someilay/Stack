#include "Stack.h"
#include <iostream>

template<typename T>
class ArrayStack : public Stack<T>{
public:
    ArrayStack(){
        stack = new T[0];
        n = 0;
    }
    ~ArrayStack() override{
        delete [] stack;
        n = 0;
    }
    void push(T value) override{
        T *bufStack = new T[n + 1];

        bufStack[n] = value;
        std::copy(stack, stack + n, bufStack);

        delete [] stack;
        stack = bufStack;
        n++;
    }
    T pop() override{
        T *bufStack = new T[n - 1];
        T bufValue = stack[n - 1];

        std::copy(stack, stack + n - 1, bufStack);

        delete [] stack;
        stack = bufStack;
        n--;

        return bufValue;
    }
    T peek() override{
        return stack[n-1];
    }
    int size() override{
        return n;
    }
    bool isEmpty() override{
        return (n == 0);
    }
private:
    T *stack;
    int n;
};
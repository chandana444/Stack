#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>
using namespace std;

class Stack{
    private:
        int arr[5];
        int top;
    public:
        Stack();

        bool isEmpty();

        bool isFull();

        void push(int );

        int pop();

        void peek(int );

        int Count();

        void change(int , int );

        void display();

};



#endif


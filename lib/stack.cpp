#include "Stack.h"

using namespace std;


Stack::Stack() 
{
      top = -1;
      for (int i = 0; i < 5; i++) {
        arr[i] = 0;
      }
    }


bool Stack::isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

bool Stack::isFull(){
    if(top==4){
        return true;
    }
    else{
        return false;
    }
}

void Stack::push(int val){
    if(isFull()){
        cout<<"stack overflow, element cannot be inserted"<<endl;
    }
    else{
        top++;
        arr[top]=val;
    }
}

int Stack::pop(){
    if(isEmpty()){
        cout<<0<<" stack underflow, element cannot be removed"<<endl;

    }
    else{
        int popValue=arr[top];
        arr[top]=0;
        top--;
        return popValue;
    }
}

void Stack::peek(int pos){
    if(isEmpty()){
        cout<<"stack underflow"<<endl;

    }
    else{
        cout<<arr[pos]<<endl;
    }
}

int Stack::Count(){
    return (top+1);
    }

void Stack::change(int pos, int val){
    arr[pos]=val;
    cout<<"value change at location"<<pos<<endl;
}

void Stack::display(){
    cout<<"All the values in the stack are:"<<endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}



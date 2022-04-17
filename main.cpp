#include "Stack.h"
#include <iostream>

using namespace std;

int main()

{
        Stack s1;
        int value, position, option;
        do{
        cout<<"Select any option number between 0 to 9 for performing the operations or select 0 to exit "<<endl;
        cout<<"1.push()"<<endl;
        cout<<"2.pop()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.peek()"<<endl;
        cout<<"6.Count()"<<endl;
        cout<<"7.change()"<<endl;
        cout<<"8.display()"<<endl;
        cout<<"9.clear screen"<<endl;
        cin>>option;

        switch(option){

        case 0:
            break;
        case 1:
            cout<<"Enter a number to insert into the stack: ";
            cin>>value;
            s1.push(value);
            break;

        case 2:
            cout<<"pop function is called, the value which is poped is: "<<s1.pop()<<endl;
            break;

        case 3:
            if (s1.isEmpty()){
            cout << "Stack is Empty" << endl;}
            else{
            cout << "Stack is not Empty" << endl;}
            break;

        case 4:
            if (s1.isFull()){
            cout << "Stack is Full" << endl;}
            else{
            cout << "Stack is not Full" << endl;}
            break;

        case 5:
            cout<<"peek function is called.."<<endl;
            cout<<"Enter the position of the item that you want to peek: "<<endl;
            cin>>position;
            s1.peek(position);
            break;

        case 6:
            cout<<"count function is called.."<<endl;
            cout<<"Number of elements present in the stack are: "<<s1.Count()<<endl;
            break;

        case 7:
            cout<<"Change function is called.."<<endl;
            cout<<"enter the position of the item and the value to be updated: "<<endl;
            cin>>position>>value;
            s1.change(position, value);
            break;

        case 8:
            s1.display();
            break;

        case 9:
            system("cls");
            break;

        default:
            cout<<"Select correct option number"<<endl;
        }
        }while(option!=0);



    return 0;
}

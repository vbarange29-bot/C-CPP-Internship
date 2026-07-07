#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push()
{
    int value;

    if(top == MAX - 1)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        cout<<"Enter value: ";
        cin>>value;

        top++;
        stack[top]=value;

        cout<<"Value inserted successfully."<<endl;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        cout<<"Deleted element is "<<stack[top]<<endl;
        top--;
    }
}

void display()
{
    if(top==-1)
    {
        cout<<"Stack is Empty"<<endl;
    }
    else
    {
        cout<<"Stack Elements are:"<<endl;

        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }

        cout<<endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout<<"\n------ STACK MENU ------"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout<<"Program Ended"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice!=4);

    return 0;
}

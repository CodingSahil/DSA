#include <iostream>
using namespace std;

class Stack
{
    int top = 0, arr[10];

public:
    void push(int value)
    {
        if (top > 9)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            arr[top] = value;
            top++;
            cout << "Pushed successfully" << endl;
        }
    }
    void deleteValue()
    {
        if(top == 0){
            cout << "Stack is Empty" << endl;
        }
        else{
            top--;   
        }
    }

    void print(){
        if(top == 0){
            cout << "Stack is Empty" << endl;
        }
        else{
            for (int i = 0; i < top; i++)
            {
                cout << arr[i] << endl;
            }
        }
    }

} stack;

int main()
{
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.print();
    stack.deleteValue();
    stack.print();
    return 0;
}
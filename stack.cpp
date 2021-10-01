#include <iostream>
using namespace std;
class Stack
{
     
    
    int top;
    public:
    int A[50];
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x){
    if (top >= (99)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        A[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

bool Stack::isEmpty(){
    return top<0;
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = A[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = A[top];
        return x;
    }
}
int main()
{

     class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.peek();
    cout<<s.pop();
}
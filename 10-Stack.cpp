// Stack is a linear data structure -> follows LIFO
// The element inserted last the first element to be removed
// Basic operations of stack -> Push():insert element at the top,Pop():removes the element from the top,
// peek():return the top element without removing, isEmpty():check if stack is empty or not(return bool value)
// isFull(): is stack full or not
#include <iostream>
using namespace std;
#define MAX 100 //maximum size of the stack

class Stack{
    int arr[MAX];
    int top;
    public:
    Stack(){top=-1;}
    void push(int x){
        if(top==MAX-1){
            cout<<"Stack Overflow\n";
            return;
        }
        arr[++top]=x;
        cout<<x<<"Pushed into stack\n";
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow\n";
            return;
        }
        cout<<arr[top--]<<"Popped from the stack\n";

    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Top Element is "<<st.peek()<<endl;
    st.pop();
    st.pop();
    cout<<"Is stack empty ?"<<(st.isEmpty()?"yes":"no")<<endl;
    return 0;
   
}
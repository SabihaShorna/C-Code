#include <iostream>
#include "StackType.h"
#include "StackType.cpp"
using namespace std;
void Print(StackType<int> s){
    StackType<int> t;
    while(!s.IsEmpty()){
        t.Push(s.Top());
        s.Pop();
    }
    while(!t.IsEmpty()){
        s.Push(t.Top());
        cout << t.Top() << " ";
        t.Pop();
    }
    cout << endl;
}
int main()
{
StackType <int> ob;
if(ob.IsEmpty()==true)
    cout << "Stack is Empty"<<endl;
else
        cout << "Stack is not Empty"<<endl;
ob.Push(5);
ob.Push(7);
ob.Push(4);
ob.Push(2);
if(ob.IsEmpty()==true)
    cout<<"Stack is Empty"<<endl;
else
        cout<<"Stack is not Empty"<<endl;

        if(ob.IsFull()==true)
    cout<<"Stack is Full"<<endl;
else
        cout<<"Stack is not Full"<<endl;

Print(ob);
ob.Push(3);
Print(ob);

 if(ob.IsFull()==true)
    cout<<"Stack is Full"<<endl;
else
        cout<<"Stack is not Full"<<endl;
        ob.Pop();
        ob.Pop();
        cout<<ob.Top()<<endl;

}

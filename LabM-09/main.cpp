#include <iostream>
#include"quetype.cpp"
#include "quetype.h"
using namespace std;

template <class ItemType>
void QueueType <ItemType>::printQueue()
{
   cout<<"FRONT  "<<fnt->data<<endl;
   cout<<"REAR  "<<rear->data<<endl;

    NodeType<ItemType> *temp = fnt;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
cout<<endl;
}


int main()
{

    QueType<int> qu ;

    if(qu.IsEmpty())
    cout<<"The Queue is Empty"<<endl;
    else
    cout<<"The Queue is not Empty"<<endl;

    qu.Enqueue(10);
    qu.Enqueue(20);
    qu.Enqueue(30);

    if(qu.IsEmpty())
    cout<<"The Queue is Empty"<<endl;
    else
    cout<<"The Queue is not Empty"<<endl;

    if(qu.IsFull())
    cout<<"The Queue is Full"<<endl;
    else
    cout<<"The Queue is not Full"<<endl;

   qu.printQueue();
  qu.Dequeue();
   qu.Dequeue();
   qu.printQueue();

    return 0;
}

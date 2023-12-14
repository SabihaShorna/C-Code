#include<iostream>
#include "queuetype.h"

using namespace std ;

template<class ItemType>

QueueType<ItemType>::QueueType()
{
    fnt=NULL;
    rear=NULL;
}

template<class ItemType>
QueueType<ItemType>::~QueueType()
{
    makeEmpty();
}

template<class ItemType>

void QueueType<ItemType>::makeEmpty()
{
    NodeType<ItemType> *temp;
    while(fnt)
    {
        temp=fnt;

        fnt=fnt->next;

        delete temp;
    }
}

template<class ItemType>

void QueueType<ItemType>::Enqueue(ItemType item)
{
    cout<<"Enqueue   "<<item<<endl;

    NodeType<ItemType> *temp = new NodeType<ItemType>;

    temp->data = item;

    temp->next = NULL;

    if(fnt==NULL)
        {fnt=temp;rear=temp;}

    else

    {rear->next = temp;

    rear=temp;}
}

template<class ItemType>

void QueueType<ItemType>::Dequeue()
{
    if(isEmpty()) ;

    else if(fnt==rear)

    { fnt=NULL; rear=NULL;}

    else
    {

    NodeType<ItemType> *temp;
    temp = fnt;
    fnt = fnt->next;
    delete temp;

    }
}

template<class ItemType>
void QueueType<ItemType>::printQueue() const
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

template<class ItemType>

bool QueueType<ItemType>::isEmpty() const
{
    return (fnt==NULL);
}

template<class ItemType>

bool QueueType<ItemType>::isFull() const
{
    NodeType<ItemType> *temp;

    try
    {
        temp = new NodeType<ItemType>;
        delete temp;
        return false;
    }
    catch(bad_alloc e){

    return true;
    }

    return (fnt==NULL);
}



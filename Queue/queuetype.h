#ifndef QUEUETYPE_H
#define QUEUETYPE_H
#include<iostream>
#include<new>

using namespace std;

template<class ItemType>
class NodeType
{
public:
    ItemType data;
    NodeType *next;
};

template<class ItemType>
class QueueType
{
private:
    NodeType<ItemType> *fnt;
    NodeType<ItemType> *rear;
public:
     QueueType();
    ~QueueType();
    void Enqueue(ItemType);
    void Dequeue();
    bool isFull () const;
	bool isEmpty() const;
	void makeEmpty();
	void printQueue() const ;

};


#endif // STACKTYPELL_H

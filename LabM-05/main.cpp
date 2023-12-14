#include <iostream>
#include <string>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timestamp.h"
#include "timestamp.cpp"
using namespace std;
template<class T>
void printList(sortedType<T> &temp_ut)
{
    T value;
    int len = temp_ut.LengthIs();

    for(int i=0; i<len; i++){
        temp_ut.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;

    temp_ut.ResetList();
}

template<class T>
void checkItemExistsOrNot(sortedType<T> &temp_ut, T &item)
{
    bool check;

    temp_ut.RetrieveItem(item, check);

    if(check == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}
int main()
{
    SortedType<int> ut;


    int n;
    cout << ut.LengthIs() <<endl;
    for(int i=0; i<5; i++){
        cin >> n;
        ut.InsertItem(n);
    }

    printList(ut);




    int value = 6;
    checkItemExistsOrNot(ut, value);

    value = 5;
    checkItemExistsOrNot(ut, value);




    if(ut.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    ut.DeleteItem(1);
    printList(ut);


    if(ut.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;





   SortedType<timeStamp> timeList;


    timeStamp time;

    time = timeStamp();

    for(int i=0; i<5; i++){
        cin >> time;
        timeList.InsertItem(time);
    }


    time = timeStamp(25,36,17);

    timeList.DeleteItem(time);



    time = timeStamp();

    printList(timeList);

    return 0;
}


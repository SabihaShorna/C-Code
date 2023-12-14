#include <iostream>
#include <string>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "studentInfo.h"

using namespace std;

template<class T>
void printList(UnsortedType<T> &temp_ut)
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
void checkItemExistsOrNot(UnsortedType<T> &temp_ut, T &item)
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
    UnsortedType<int> ut;


    int n;
    for(int i=0; i<4; i++){
        cin >> n;
        ut.InsertItem(n);
    }

    printList(ut);

    cout << ut.LengthIs() <<endl;


    cin >> n;
    ut.InsertItem(n);


    printList(ut);


    int value = 4;
    checkItemExistsOrNot(ut, value);

    value = 5;
    checkItemExistsOrNot(ut, value);

    value = 9;
    checkItemExistsOrNot(ut, value);


    value = 10;
    checkItemExistsOrNot(ut, value);


    if(ut.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    ut.DeleteItem(5);


    if(ut.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;


    ut.DeleteItem(1);


    printList(ut);


    ut.DeleteItem(6);


    printList(ut);






    UnsortedType<studentInfo> studentList;


    studentInfo student;

    student = studentInfo();

    for(int i=0; i<5; i++){
        cin >> student;
        studentList.InsertItem(student);
    }


    student = studentInfo(15467);

    studentList.DeleteItem(student);


    student = studentInfo(13569);

    checkItemExistsOrNot(studentList, student);

    cout << student << endl << endl;


    student = studentInfo();

    printList(studentList);

    return 0;
}


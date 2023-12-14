#include <iostream>
using namespace std;

int main()
{
    //to declare variable type
   int *array = NULL;
   int size;
   cout << "Enter the size of Array: "; // to print the line
   cin >> size; //taking user input for size of the array
   array = new int[size];// initializing

  for (int i = 0; i < size; i++)//taking user input for elements of the array
   cin >> array[i];
cout << "The elements of array are: ";//printing elements of the array
 for (int j = 0; j < size; j++)
      cout << array[j] << " ";

  delete [] array;//  to deallocate the Array

  return 0;
}

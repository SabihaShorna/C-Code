#include<iostream>
#include<string>

using namespace std;

void print(string** ,int ,int );//function prototype

int main()
{
    //taking user input for row and col.
    int r,c;
    cout<<"Enter the size of row: ";
    cin>>r;
    cout<<"Enter the size of Col: ";
    cin>>c;

    string** arry; // Declare pointer of pointer
    arry = new string*[r]; //initializing number of row in array
    for(int ii=0; ii<r;ii++)
    {
        arry[ii]=new string[c];//initializing number of col in array
    }

   for(int i=0; i<r; i++)
    {
      for(int j=0; j<c; j++)
        {
            cin>>arry[i][j];//Taking character as user input
        }
    }
    print(arry,r,c);// invoked the print function to print
                    //element of array
    for(int tt=0;tt<r;tt++)
    {
        //deallocate the array
      delete [] arry[tt];
      delete [] arry;
    }

}
void print(string** arry,int r,int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arry[i][j] << " ";//print element of array
        }
        cout<<endl;
    }

}

	#include <iostream>
	#include <string>
	using namespace std;
	const int Msize = 10; //You can set it according to your requirement
	typedef struct {
    int where;
	    string other;
     } Blob;
	class Bag {
    Blob *b[Msize];
	    public:
    //constructor
    Bag () {
        for (int i = 0; i < Msize; i++)
	            b[i] = NULL;
	    }
    //isEmpty function: returns true or false whether bag is empty or not
	    bool isEmpty () {
	        for (int i = 0; i < Msize; i++)
	            if (b[i] != NULL) return false;
	        return true;
	    }
	    //isFull function:returns true or false whether bag is empty or not
	    bool isFull () {
	        for (int i = 0; i < Msize; i++)
	            if (b[i] == NULL) return false;
	        return true;
	    }
	    //to insert a new blob in the bag
	    bool insert (Blob blb) {
	        /* if the bag is full or the position is already occupied it will not insert*/
	        if (b[blb.where] != NULL || isFull()) return false;
        b[blb.where] = &blb; //else it will insert the blob
	        return true;
	    }
	    //to delete a blob from the bag
	    bool del (Blob blb) {
	        /*If blob is not present or the bag is empty it will return false*/
	        if (b[blb.where] == NULL or isEmpty()) return false;
	        b[blb.where] = NULL; //else it will delete the blob
                return true;
	    }
	    //to print the contents of the bag
    void print () {
	        cout << "[ ";
	        for (int i = 0; i < Msize; i++)
	            cout << (b[i] == NULL ? "null" : to_string (b[i]->where)) << " ";
	        cout << "]\n";
    }
	    //to count the no_of_blob in the bag
	    int no_of_blob()
	    {
	        int count=0;
	        for (int i = 0; i < Msize; i++)
	            if (b[i] != NULL) count++; //if blob is not null then increment the count
	            return count;
	    }
	};
	//main function to test the code
	int main()
	{
	    //inserting 3 blobs in the bag
	    Blob first, third, fourth;
	    first.where = 1; first.other = "First";
	    third.where = 3; third.other = "Third";
    fourth.where = 4; fourth.other = "Fourth";
	    Bag myBag;
    cout<<"Initial bag: ";
	    myBag.print();
	    myBag.insert (first);
	    myBag.insert (third);
	    myBag.insert (fourth);
	    cout<<"Bag after insert:";
	    myBag.print();
	    cout<<"Total Blob: "<<myBag.no_of_blob()<<endl;
	    //now delete blobs
	    myBag.del (third);
	    myBag.del(first);
	    cout<<"Bag after delete";
	    myBag.print();
	    cout<<"Total Blob: "<<myBag.no_of_blob()<<endl;
	    return 0;
}
